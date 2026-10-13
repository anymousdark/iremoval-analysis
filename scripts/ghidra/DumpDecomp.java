import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;

import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.regex.Pattern;

/**
 * Dump de pseudocode para funcoes selecionadas.
 *
 * Uso (projeto ja analisado, sem refazer a analise):
 *   analyzeHeadless <projDir> <projName> -process <programName> -noanalysis -readOnly \
 *       -scriptPath <dir> -postScript DumpDecomp.java <outDir> <minSize> [regex]
 *
 * Saida: <outDir>/<addr>_<nome>.c  +  <outDir>/_index.tsv
 */
public class DumpDecomp extends GhidraScript {

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) {
            println("uso: DumpDecomp.java <outDir> <minSize> [regexDeNome]");
            return;
        }
        File outDir = new File(args[0]);
        long minSize = Long.parseLong(args[1]);
        Pattern filter = args.length > 2 ? Pattern.compile(args[2]) : null;

        if (!outDir.isDirectory() && !outDir.mkdirs()) {
            println("falha ao criar " + outDir.getAbsolutePath());
            return;
        }

        DecompInterface dec = new DecompInterface();
        dec.toggleCCode(true);
        dec.toggleSyntaxTree(true);
        dec.setSimplificationStyle("decompile");
        boolean opened = dec.openProgram(currentProgram);
        if (!opened) {
            println("falha ao abrir DecompInterface: " + dec.getLastMessage());
            return;
        }

        File index = new File(outDir, "_index.tsv");
        int dumped = 0, considered = 0, failed = 0;

        PrintWriter idx = new PrintWriter(new FileWriter(index));
        idx.println("address\tsize\tname\tstatus\tfile");

        FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
        while (it.hasNext() && !monitor.isCancelled()) {
            Function f = it.next();
            if (f.isExternal() || f.isThunk()) {
                continue;
            }
            long body = f.getBody().getNumAddresses();
            if (body < minSize) {
                continue;
            }
            String name = f.getName();
            if (filter != null && !filter.matcher(name).find()) {
                continue;
            }
            considered++;

            DecompileResults r = dec.decompileFunction(f, 180, monitor);
            String status;
            String file = "";
            if (r.decompileCompleted() && r.getDecompiledFunction() != null) {
                String safe = name.replaceAll("[^A-Za-z0-9_.-]", "_");
                file = f.getEntryPoint() + "_" + safe + ".c";
                PrintWriter pw = new PrintWriter(new FileWriter(new File(outDir, file)));
                pw.println("/* " + f.getEntryPoint() + "  " + name + "  body=" + body + " */");
                pw.print(r.getDecompiledFunction().getC());
                pw.close();
                dumped++;
                status = "ok";
            } else {
                failed++;
                String em = r.getErrorMessage();
                status = (em == null) ? "no-code" : em;
            }
            idx.println(f.getEntryPoint() + "\t" + body + "\t" + name + "\t" + status + "\t" + file);
        }
        idx.close();
        dec.dispose();

        println("DumpDecomp: considerados=" + considered
            + " gravados=" + dumped + " falhas=" + failed
            + " -> " + outDir.getAbsolutePath());
    }
}
