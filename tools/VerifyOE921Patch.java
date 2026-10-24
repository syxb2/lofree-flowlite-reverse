// Independent Ghidra decode/decompile check of the generated analysis ELF.
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.Function;
import ghidra.program.model.pcode.PcodeOp;
import ghidra.program.model.pcode.Varnode;
import java.io.File;
import java.io.PrintWriter;

public class VerifyOE921Patch extends GhidraScript {
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length != 1) throw new IllegalArgumentException("Expected output path");
        File output = new File(args[0]);
        if (output.exists()) throw new IllegalArgumentException("Refusing to overwrite output");
        for (long[] check : new long[][]{{0x8b88,180},{0x92b8,174}}) {
            Instruction instruction = getInstructionAt(toAddr(check[0]));
            boolean constantObserved = false;
            if (instruction != null) {
                for (PcodeOp operation : instruction.getPcode()) {
                    for (Varnode input : operation.getInputs()) {
                        if (input.isConstant() && input.getOffset() == check[1]) constantObserved = true;
                    }
                }
            }
            if (instruction == null || !instruction.getMnemonicString().equals("li") ||
                    !instruction.getDefaultOperandRepresentation(0).equals("a4") ||
                    !constantObserved) {
                throw new IllegalStateException("Unexpected decoded patch at " + toAddr(check[0]) +
                    ": " + instruction + "; scalar=" + (instruction == null ? null : instruction.getScalar(1)));
            }
        }
        DecompInterface decompiler = new DecompInterface();
        if (!decompiler.openProgram(currentProgram)) throw new IllegalStateException("Cannot open program");
        try (PrintWriter writer = new PrintWriter(output)) {
            writer.println("Analysis ELF SHA256: " + currentProgram.getExecutableSHA256());
            writer.println("Language: " + currentProgram.getLanguageID());
            writer.println("Verified instructions: 0x8b88 li a4,180; 0x92b8 li a4,174");
            for (long address : new long[]{0x8b80,0x917c,0xc772}) {
                Function function = getFunctionAt(toAddr(address));
                if (function == null) throw new IllegalStateException("Function missing");
                DecompileResults result = decompiler.decompileFunction(function,30,monitor);
                if (!result.decompileCompleted()) throw new IllegalStateException(result.getErrorMessage());
                writer.println(result.getDecompiledFunction().getC());
            }
            if (writer.checkError()) throw new IllegalStateException("Write failed");
        } finally { decompiler.dispose(); }
        println("Independent patch disassembly and three-function decompilation passed");
    }
}
