import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.Reference;

import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.Arrays;
import java.util.HashSet;
import java.util.Set;

/**
 * Para cada endereco informado, lista as REFERENCIAS (xrefs) e descompila cada
 * funcao que referencia o endereco (uma vez por funcao). Salva em
 * <outDir>/<entry>_<nome>.c e indexa em <outDir>/_xref_at.tsv.
 *
 * Uso (projeto ja analisado, sem refazer a analise):
 *   analyzeHeadless <projDir> <projName> -process <programName> -noanalysis \
 *       -scriptPath <dir> -postScript XrefAt.java <outDir> <hexAddr> [<hexAddr> ...]
 */
public class XrefAt extends GhidraScript {

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) {
            println("uso: XrefAt.java <outDir> <hexAddr> [<hexAddr> ...]");
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

        PrintWriter report = new PrintWriter(new FileWriter(new File(outDir, "_xref_at.tsv"), true));
        Set<String> done = new HashSet<String>();

        for (String spec : Arrays.copyOfRange(args, 1, args.length)) {
            long va;
            try {
                va = Long.parseLong(spec.replaceFirst("^0x", ""), 16);
            } catch (NumberFormatException e) {
                report.println(spec + "\taddr-invalido");
                continue;
            }
            Address target = currentProgram.getAddressFactory()
                .getDefaultAddressSpace().getAddress(va);
            Reference[] refs = getReferencesTo(target);
            report.println("ADDR\t" + spec + "\trefs=" + refs.length);
            println(spec + " refs=" + refs.length);
            for (Reference r : refs) {
                Address from = r.getFromAddress();
                Function f = getFunctionContaining(from);
                if (f == null) {
                    report.println(spec + "\t" + from + "\tsem-funcao");
                    continue;
                }
                String key = f.getEntryPoint().toString();
                if (done.contains(key)) {
                    report.println(spec + "\t" + from + "\t" + key + "\t(ja-dumpada)");
                    continue;
                }
                done.add(key);
                DecompileResults dr = dec.decompileFunction(f, 240, monitor);
                if (dr.decompileCompleted() && dr.getDecompiledFunction() != null) {
                    String safe = f.getName().replaceAll("[^A-Za-z0-9_.-]", "_");
                    String file = f.getEntryPoint() + "_" + safe + ".c";
                    PrintWriter pw = new PrintWriter(new FileWriter(new File(outDir, file)));
                    pw.println("/* xref-of=" + spec
                        + " from=" + from
                        + " containing=" + f.getEntryPoint()
                        + " name=" + f.getName()
                        + " body=" + f.getBody().getNumAddresses() + " */");
                    pw.print(dr.getDecompiledFunction().getC());
                    pw.close();
                    report.println(spec + "\t" + from + "\t" + f.getEntryPoint() + "\t" + file);
                    println(spec + " -> " + f.getEntryPoint() + " " + f.getName());
                } else {
                    String em = dr.getErrorMessage();
                    report.println(spec + "\t" + from + "\t" + f.getEntryPoint() + "\tERRO:" + em);
                    println(spec + " -> " + f.getEntryPoint() + " ERRO " + em);
                }
            }
        }

        report.close();
        dec.dispose();
        println("XrefAt concluido -> " + outDir.getAbsolutePath());
    }
}
