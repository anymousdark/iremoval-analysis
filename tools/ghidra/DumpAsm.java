import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;

import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;

/**
 * Dump de instrucoes num intervalo, para resolver argumentos de chamada que o
 * decompilador perdeu.
 *
 * Uso:
 *   analyzeHeadless <projDir> <projName> -process <programName> -noanalysis -readOnly \
 *       -scriptPath <dir> -postScript DumpAsm.java <outFile> <startHex> [<endHex>]
 */
public class DumpAsm extends GhidraScript {

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) {
            println("uso: DumpAsm.java <outFile> <startHex> [<endHex>]");
            return;
        }
        File out = new File(args[0]);
        if (out.getParentFile() != null && !out.getParentFile().isDirectory()) {
            out.getParentFile().mkdirs();
        }
        long start = Long.parseLong(args[1].replaceFirst("^0x", ""), 16);
        long end = (args.length > 2)
                ? Long.parseLong(args[2].replaceFirst("^0x", ""), 16)
                : start + 0x200;

        Address a = currentProgram.getAddressFactory()
                .getDefaultAddressSpace().getAddress(start);
        Address ea = currentProgram.getAddressFactory()
                .getDefaultAddressSpace().getAddress(end);

        PrintWriter pw = new PrintWriter(new FileWriter(out));
        InstructionIterator it = currentProgram.getListing().getInstructions(a, true);
        while (it.hasNext()) {
            Instruction ins = it.next();
            if (ins.getAddress().compareTo(ea) > 0) {
                break;
            }
            pw.println(ins.getAddress() + "  " + ins.toString());
        }
        pw.close();
        println("DumpAsm -> " + out.getAbsolutePath());
    }
}
