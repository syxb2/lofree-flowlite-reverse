// Static analysis only: export decompiled functions and their direct call graph.
// Run as a Ghidra headless post-script against an already imported PE file.
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.symbol.Reference;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;

public class DumpNativeFunctions extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1 || args.length > 2) throw new IllegalArgumentException("Expected C output and optional instruction output");
        File output = new File(args[0]);
        if (output.exists()) throw new IllegalArgumentException("Refusing to overwrite " + output);
        DecompInterface decompiler = new DecompInterface();
        decompiler.toggleCCode(true);
        decompiler.toggleSyntaxTree(false);
        if (!decompiler.openProgram(currentProgram)) throw new IllegalStateException("Cannot open program");
        int completed = 0;
        int failed = 0;
        try (PrintWriter writer = new PrintWriter(new BufferedWriter(new FileWriter(output)))) {
            writer.println("// Input: " + currentProgram.getExecutablePath());
            writer.println("// SHA256: " + currentProgram.getExecutableSHA256());
            writer.println("// Language: " + currentProgram.getLanguageID());
            writer.println("// Pseudocode is analysis output, not recovered source.");
            FunctionIterator iterator = currentProgram.getFunctionManager().getFunctions(true);
            while (iterator.hasNext() && !monitor.isCancelled()) {
                Function function = iterator.next();
                writer.println("\n// FUNCTION " + function.getEntryPoint() + " " + function.getName());
                writer.println("// THUNK " + function.isThunk());
                for (Function callee : function.getCalledFunctions(monitor)) {
                    writer.println("// CALLS " + callee.getEntryPoint() + " " + callee.getName());
                }
                if (function.isThunk()) continue;
                DecompileResults result = decompiler.decompileFunction(function, 30, monitor);
                if (result.decompileCompleted() && result.getDecompiledFunction() != null) {
                    writer.println(result.getDecompiledFunction().getC());
                    completed++;
                } else {
                    writer.println("// DECOMPILE FAILED " + result.getErrorMessage());
                    failed++;
                }
            }
            writer.println("// TOTAL completed=" + completed + " failed=" + failed);
            if (writer.checkError()) throw new IllegalStateException("Output write failed");
        } finally {
            decompiler.dispose();
        }
        println("Exported " + completed + " functions; failures=" + failed);
        if (args.length == 2) {
            File assembly = new File(args[1]);
            if (assembly.exists()) throw new IllegalArgumentException("Refusing to overwrite " + assembly);
            try (PrintWriter writer = new PrintWriter(new BufferedWriter(new FileWriter(assembly)))) {
                InstructionIterator instructions = currentProgram.getListing().getInstructions(true);
                while (instructions.hasNext() && !monitor.isCancelled()) {
                    Instruction instruction = instructions.next();
                    writer.print(instruction.getAddress() + " ");
                    for (byte value : instruction.getBytes()) writer.printf("%02x", value & 255);
                    writer.print(" " + instruction.toString());
                    for (Reference reference : instruction.getReferencesFrom()) {
                        writer.print(" ; " + reference.getReferenceType() + " " + reference.getToAddress());
                    }
                    writer.println();
                }
                if (writer.checkError()) throw new IllegalStateException("Instruction output write failed");
            }
        }
    }
}
