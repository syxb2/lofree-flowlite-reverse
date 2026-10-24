/* Bounded RV32/XW interpreter for the actual idle reload and ISR bytes.
 * It executes no host/device firmware, and models no peripherals or radio.
 * Unsupported instructions and out-of-range memory fail closed.
 */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static uint8_t code[65536], ram[0x5000];
static uint32_t reg[32], pc, code_length;
static void fail(const char *s) { fprintf(stderr, "%s at pc=%08x\n", s, pc); exit(1); }
static int32_t sx(uint32_t value, unsigned bits) {
    return (int32_t)(value << (32-bits)) >> (32-bits);
}
static uint32_t load(uint32_t address, unsigned n) {
    if (address < 0x20000000 || address + n > 0x20005000) fail("RAM read bounds");
    uint32_t result = 0;
    for (unsigned i=0; i<n; i++) result |= (uint32_t)ram[address-0x20000000+i] << (8*i);
    return result;
}
static void store(uint32_t address, uint32_t value, unsigned n) {
    if (address < 0x20000000 || address + n > 0x20005000) fail("RAM write bounds");
    for (unsigned i=0; i<n; i++) ram[address-0x20000000+i] = value >> (8*i);
}
static void step(void) {
    if (pc<0x1600 || pc+4>0x1600+code_length) fail("PC bounds");
    uint32_t offset=pc-0x1600;
    uint32_t h=code[offset] | code[offset+1]<<8;
    uint32_t next=pc+2;
    if ((h&3)!=3) {
        unsigned q=h&3, f=h>>13, rd=(h>>7)&31;
        int32_t imm=sx(((h>>12)&1)*32+((h>>2)&31),6);
        if (q==1 && f==0) reg[rd]+=imm;                 /* c.addi */
        else if (q==1 && f==2) reg[rd]=imm;             /* c.li */
        else if (q==1 && f==3 && rd!=2) reg[rd]=(uint32_t)imm<<12;
        else if (q==2 && f==0) reg[rd]<<=((h>>2)&31)|((h>>12)&1)*32;
        else if (q==1 && f==4 && ((h>>10)&3)==0) {       /* c.srli */
            rd=8+((h>>7)&7); reg[rd]>>=((h>>2)&31)|((h>>12)&1)*32;
        } else if (q==1 && (f==6 || f==7)) {
            int32_t delta=sx(((h>>12)&1)*256+((h>>10)&3)*8+
                ((h>>5)&3)*64+((h>>3)&3)*2+((h>>2)&1)*32,9);
            int take=(reg[8+((h>>7)&7)]==0);
            if ((f==6 && take)||(f==7 && !take)) next=pc+delta;
        } else if ((q==0||q==2) && (f==1||f==5)) {       /* XW loads/stores */
            unsigned value_reg=8+((h>>2)&7), base=8+((h>>7)&7);
            unsigned displacement=q==0 ? (((h>>12)&1)|((h>>10)&3)*8|((h>>5)&3)*2)
                : (((h>>10)&7)*8|((h>>5)&3)*2);
            if (f==1) reg[value_reg]=load(reg[base]+displacement,q==0?1:2);
            else store(reg[base]+displacement,reg[value_reg],q==0?1:2);
        } else if (h==0x8082) next=reg[1]&~1U;          /* ret */
        else fail("Unsupported compressed instruction");
    } else {
        uint32_t w=h | (uint32_t)code[offset+2]<<16 | (uint32_t)code[offset+3]<<24;
        unsigned op=w&127, rd=(w>>7)&31, rs=(w>>15)&31, rt=(w>>20)&31, f=(w>>12)&7;
        int32_t imm=(int32_t)w>>20;
        next=pc+4;
        if (op==0x13 && f==0) reg[rd]=reg[rs]+imm;
        else if (op==0x13 && f==7) reg[rd]=reg[rs] & (uint32_t)imm;
        else if (op==0x37) reg[rd]=w&0xfffff000;
        else if (op==3 && (f==4||f==5)) reg[rd]=load(reg[rs]+imm,f==4?1:2);
        else if (op==0x23 && (f==0||f==1)) {
            imm=sx(((w>>25)<<5)|((w>>7)&31),12);
            store(reg[rs]+imm,reg[rt],f==0?1:2);
        } else if (op==0x63 && f==6) {
            imm=sx(((w>>31)&1)*4096+((w>>7)&1)*2048+((w>>25)&63)*32+((w>>8)&15)*2,13);
            if (reg[rs]<reg[rt]) next=pc+imm;
        } else fail("Unsupported 32-bit instruction");
    }
    pc=next; reg[0]=0;
}
static uint32_t run(uint32_t start, uint32_t end1, uint32_t end2) {
    pc=start;
    for (unsigned n=0;n<64;n++) {
        if (pc==end1 || pc==end2) return pc;
        step();
    }
    fail("Instruction budget"); return 0;
}
static void check(int valid,const char *message) { if(!valid) fail(message); }
static void reset(unsigned mode, unsigned periods) {
    memset(ram,0,sizeof(ram)); memset(reg,0,sizeof(reg));
    reg[3]=0x20000820; reg[1]=0xfffffff0;
    ram[0x32e]=mode;
    run(0x8b80,0xfffffff0,0xfffffff0);
    check(load(0x2000011c,2)==10000,"Incorrect tick reload");
    check(load(0x2000011e,1)==periods,"Incorrect period reload");
    check(load(0x2000011f,1)==periods,"Incorrect stored maximum");
    check(load(0x20000118,1)==0,"Unexpected idle flag");
}
static void tick(void) { run(0xc822,0xc85c,0xc85c); }
static void verify(const char *path,unsigned maximum) {
    FILE *stream=fopen(path,"rb"); if(!stream) fail("Input open");
    code_length=fread(code,1,sizeof(code),stream); fclose(stream);
    check(code_length==56436,"Unexpected firmware length");
    for (unsigned mode=0;mode<6;mode++) {
        unsigned periods=mode?maximum:6, expiry=periods*10000;
        reset(mode,periods);
        for (unsigned t=1;t<=expiry;t++) {
            tick();
            if (t==59999 || t==60000) {
                if(mode) {
                    uint32_t destination=run(0x92b4,0x92c0,0x92d2);
                    check((destination==0x92c0)==(t==60000),"Early MCU-only gate moved");
                }
            }
            if (t==expiry-1) check(!ram[0x118],"Idle flag set early");
        }
        check(ram[0x118]==1,"Idle flag not set on exact expiry");
        check(ram[0x11e]==0,"Counter not exhausted");
        reset(mode,periods); /* Real reload must clear the expiry flag on activity. */
        printf("%s mode=%u expiry_ticks=%u early_gate_ticks=60000 PASS\n",path,mode,expiry);
    }
}
int main(int argc,char **argv) {
    if(argc!=3) { fprintf(stderr,"Usage: verify original_decoded patched_decoded\n");return 2; }
    verify(argv[1],60); verify(argv[2],180);
    puts("Actual reload/ISR/gate machine-code execution passed; physical radio is not emulated.");
    return 0;
}
