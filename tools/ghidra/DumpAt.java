import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;

import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.Arrays;

/**
 * Descompila funcoes POR ENDERECO: para cada endereco informado, localiza a
 * funcao que o CONTEM (getFunctionContaining) e salva o pseudocode em
 * <outDir>/<entryAddr>_<nome>.c, com um _dump_at.tsv de indice.
 *
 * Complementa:
 *   - DumpDecomp.java  (tudo por tamanho/regex de nome)
 *   - Exports.java     (forca funcao em endereco boneco, ex.: exports)
 *
 * Uso (projeto ja analisado, sem refazer a analise):
 *   analyzeHeadless <projDir> <projName> -process <programName> -noanalysis -readOnly \
 *       -scriptPath <dir> -postScript DumpAt.java <outDir> <hexAddr> [<hexAddr> ...]
 *
 * Ex.:
 *   DumpAt.java F:\iremoval-analysis\decompiled\gates 18053e585 18053eb22
 */
public class DumpAt extends GhidraScript {

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) {
            println("uso: DumpAt.java <outDir> <hexAddr> [<hexAddr> ...]");
            return;
        }
        File outDir = new File(args[0]);
        if (!outDir.isDirectory() && !outDir.mkdirs()) {
            println("falha ao criar " + outDir.getAbsolutePath());
            return;
        }

        DecompInterface dec = new DecompInterface();
        dec.toggleCCode(true);
        dec.toggleSyntaxTree(true);
        dec.setSimplificationStyle("decompile");
        if (!dec.openProgram(currentProgram)) {
            println("falha DecompInterface: " + dec.getLastMessage());
            return;
        }

        PrintWriter report = new PrintWriter(new FileWriter(new File(outDir, "_dump_at.tsv"), true));

        for (String spec : Arrays.copyOfRange(args, 1, args.length)) {
            long va;
            try {
                va = Long.parseLong(spec.replaceFirst("^0x", ""), 16);
            } catch (NumberFormatException e) {
                report.println(spec + "\t-\t-\tno\tendereco-invalido\t");
                continue;
            }
            Address a = currentProgram.getAddressFactory()
                .getDefaultAddressSpace().getAddress(va);

            boolean hasCode = getInstructionAt(a) != null;
            if (!hasCode) {
                hasCode = disassemble(a);
            }
            Function f = getFunctionContaining(a);
            boolean created = false;
            if (f == null) {
                f = createFunction(a, "FUN_at_" + spec);
                created = (f != null);
            }

            String status;
            String file = "";
            if (f == null) {
                status = "sem funcao (hasCode=" + hasCode + ")";
            } else {
                DecompileResults r = dec.decompileFunction(f, 240, monitor);
                if (r.decompileCompleted() && r.getDecompiledFunction() != null) {
                    String safe = f.getName().replaceAll("[^A-Za-z0-9_.-]", "_");
                    file = f.getEntryPoint() + "_" + safe + ".c";
                    PrintWriter pw = new PrintWriter(new FileWriter(new File(outDir, file)));
                    pw.println("/* query=" + spec
                        + " containing=" + f.getEntryPoint()
                        + " name=" + f.getName()
                        + " body=" + f.getBody().getNumAddresses() + " */");
                    pw.print(r.getDecompiledFunction().getC());
                    pw.close();
                    status = "ok";
                } else {
                    String em = r.getErrorMessage();
                    status = (em == null) ? "no-code" : em;
                }
            }
            String entry = (f == null) ? "-" : f.getEntryPoint().toString();
            String name = (f == null) ? "-" : f.getName();
            report.println(spec + "\t" + entry + "\t" + name + "\t" + created + "\t" + status + "\t" + file);
            println(spec + " -> " + entry + " " + name + " status=" + status + " created=" + created);
        }

        report.close();
        dec.dispose();
        println("DumpAt concluido -> " + outDir.getAbsolutePath());
    }
}
