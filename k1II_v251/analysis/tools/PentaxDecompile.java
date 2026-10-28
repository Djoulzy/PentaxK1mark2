// Targeted static analysis. No firmware execution.
// @category Firmware
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.nio.file.*;
import java.nio.charset.StandardCharsets;
import java.util.*;
import java.io.*;

public class PentaxDecompile extends GhidraScript {
    public void run() throws Exception {
        String[] args = getScriptArgs();
        Path root = Paths.get(args[0]);
        Path out = root.resolve("analysis/decompiled");
        Files.createDirectories(out);
        LinkedHashMap<Long,String> entries = new LinkedHashMap<>();
        for (String line : Files.readAllLines(root.resolve("analysis/reports/targets.tsv"))) {
            if (line.startsWith("address") || line.isBlank()) continue;
            String[] col = line.split("\t");
            entries.put(Long.parseUnsignedLong(col[0].replace("0x",""),16),col[1]);
        }
        for (Map.Entry<Long,String> e : entries.entrySet()) {
            Address a = toAddr(e.getKey());
            disassemble(a);
            Function f = getFunctionAt(a);
            if (f == null) f = createFunction(a,e.getValue());
            if (f != null) f.setName(e.getValue(),SourceType.USER_DEFINED);
        }
        // Create direct callees so the decompiler sees call/return boundaries.
        for (int depth=0; depth<2; depth++) {
            ArrayList<Address> calls = new ArrayList<>();
            FunctionIterator funcs = currentProgram.getFunctionManager().getFunctions(true);
            while (funcs.hasNext()) {
                Function f=funcs.next();
                InstructionIterator ins=currentProgram.getListing().getInstructions(f.getBody(),true);
                while(ins.hasNext()) {
                    Instruction i=ins.next();
                    if (i.getFlowType().isCall())
                        for (Address a:i.getFlows())
                            if (currentProgram.getMemory().contains(a) && getFunctionAt(a)==null)
                                calls.add(a);
                }
            }
            for (Address a:calls) { disassemble(a); if (getFunctionAt(a)==null) createFunction(a,null); }
            println("Direct callee pass " + depth + ": " + calls.size());
        }
        DecompInterface di=new DecompInterface();
        DecompileOptions options=new DecompileOptions();
        di.setOptions(options);
        di.openProgram(currentProgram);
        try (PrintWriter index=new PrintWriter(out.resolve("index.tsv").toFile(),StandardCharsets.UTF_8)) {
            index.println("address\tname\tstatus\tbody_bytes");
            for (Map.Entry<Long,String> e:entries.entrySet()) {
                Function f=getFunctionAt(toAddr(e.getKey()));
                if (f==null) { index.println(Long.toHexString(e.getKey())+"\t"+e.getValue()+"\tmissing\t0"); continue; }
                DecompileResults res=di.decompileFunction(f,30,monitor);
                String stem=String.format("%08x_%s",e.getKey(),e.getValue());
                if (res.decompileCompleted()) {
                    String code="/* Ghidra 12.2, ARM:LE:32:v7, base 0x40000000.\n"+
                        " * Automatically reconstructed C; types and names may be approximate.\n"+
                        " * Names from cmd_*.txt are original; obs_* names are analyst labels. */\n"+
                        res.getDecompiledFunction().getC();
                    Files.writeString(out.resolve(stem+".c"),code);
                }
                index.println(String.format("0x%08x\t%s\t%s\t%d",e.getKey(),e.getValue(),
                    res.decompileCompleted()?"ok":res.getErrorMessage().replace('\n',' '),f.getBody().getNumAddresses()));
                try(PrintWriter asm=new PrintWriter(out.resolve(stem+".asm").toFile(),StandardCharsets.UTF_8)) {
                    InstructionIterator it=currentProgram.getListing().getInstructions(f.getBody(),true);
                    while(it.hasNext()) { Instruction i=it.next(); asm.println(i.getAddress()+"  "+i); }
                }
                println("Decompiled " + e.getValue());
            }
        } finally { di.dispose(); }
    }
}
