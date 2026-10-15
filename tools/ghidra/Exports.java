import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;

import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;

/**
 * Forca desmontagem + criacao de funcao em enderecos arbitrarios (ex.: exports
 * que o auto-analyzer nao alcanca) e descompila cada um.
 *
 * Uso:
 *   analyzeHeadless <projDir> <projName> -process <programName> -noanalysis -readOnly \
 *       -scriptPath <dir> -postScript Exports.java <outDir> <hexSemPrefixo>:<nome> ...
 *
 * Ex.:
 *   Exports.java <outDir> 180542810:Action 180542b30:SetCallbacks 180542b60:SetWinInfo
 */
public class Exports extends GhidraScript {

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) {
            println("uso: Exports.java <outDir> <hex>:<nome> ...");
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

        PrintWriter report = new PrintWriter(new FileWriter(new File(outDir, "_exports.tsv")));
        report.println("address\tname\tcreated\thasCode\tstatus\tfile");

        for (int i = 1; i < args.length; i++) {
            String spec = args[i];
            int colon = spec.indexOf(':');
            if (colon < 1) {
                report.println("-\t" + spec + "\tno\t?\tspec-invalido\t");
                continue;
            }
            long va = Long.parseLong(spec.substring(0, colon), 16);
            String name = spec.substring(colon + 1);

            Address a = currentProgram.getAddressFactory()
                .getDefaultAddressSpace().getAddress(va);

            boolean created = false;
            boolean hasCode = getInstructionAt(a) != null;

            if (!hasCode) {
                hasCode = disassemble(a);
            }
            Function f = getFunctionAt(a);
            if (f == null) {
                f = createFunction(a, name);
                created = (f != null);
            }
            if (f != null) {
                f.setName(name, ghidra.program.model.symbol.SourceType.USER_DEFINED);
            }

            String status, file = "";
            if (f == null) {
                status = "sem funcao (hasCode=" + hasCode + ")";
            } else {
                DecompileResults r = dec.decompileFunction(f, 180, monitor);
                if (r.decompileCompleted() && r.getDecompiledFunction() != null) {
                    file = name + "_" + a + ".c";
                    PrintWriter pw = new PrintWriter(new FileWriter(new File(outDir, file)));
                    pw.println("/* " + a + "  " + name + "  body=" + f.getBody().getNumAddresses() + " */");
                    pw.print(r.getDecompiledFunction().getC());
                    pw.close();
                    status = "ok";
                } else {
                    String em = r.getErrorMessage();
                    status = (em == null) ? "no-code" : em;
                }
            }
            println(name + " @ " + a + " -> " + status + " created=" + created);
            report.println(a + "\t" + name + "\t" + created + "\t" + hasCode + "\t" + status + "\t" + file);
        }

        report.close();
        dec.dispose();
        println("Exports concluido -> " + outDir.getAbsolutePath());
    }
}
