// Establish observed CPU alias, global pointer and vector seeds for OE921 v1.66.
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.lang.Register;
import java.math.BigInteger;
import ghidra.program.model.listing.FlowOverride;
import ghidra.program.model.listing.Function;

public class PrepareOE921 extends GhidraScript {
    public void run() throws Exception {
        Register gp = currentProgram.getRegister("gp");
        currentProgram.getProgramContext().setValue(gp, toAddr(0x1600), toAddr(0xf273),
                new BigInteger("20000820", 16));
        createLabel(toAddr(0x20000820), "observed_global_pointer", true);
        createLabel(toAddr(0x20005000), "observed_initial_stack", true);
        for (long entry : new long[]{0x1600, 0x1700, 0xd410, 0xceba}) {
            Address address = toAddr(entry);
            addEntryPoint(address);
            disassemble(address);
            createFunction(address, entry == 0xd410 ? "observed_reset_startup" : null);
        }
        for (long address : new long[]{0x172e, 0x173a}) {
            disassemble(toAddr(address));
            getInstructionAt(toAddr(address)).setFlowOverride(FlowOverride.RETURN);
        }
        for (long entry : new long[]{0x1700, 0x1708, 0x1716, 0x1730, 0x173c, 0x1740, 0x174a, 0x1754}) {
            disassemble(toAddr(entry));
            Function function = getFunctionAt(toAddr(entry));
            if (function == null) function = createFunction(toAddr(entry), null);
            if (function != null) function.setInline(true);
        }
        for (int offset = 12; offset < 0xe0; offset += 4) {
            long target = getInt(toAddr(0x1600 + offset)) & 0xffffffffL;
            if (target < 0x1700 || target >= 0xf1f4 || (target & 1) != 0) continue;
            Address address = toAddr(target);
            addEntryPoint(address);
            disassemble(address);
            if (getFunctionAt(address) == null) createFunction(address, null);
        }
        println("OE921 CPU alias 0x1600; gp=0x20000820; seeded startup and vectors");
    }
}
