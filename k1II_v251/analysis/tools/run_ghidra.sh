#!/usr/bin/env bash
# Usage: bash analysis/tools/run_ghidra.sh /path/to/ghidra_12.2_PUBLIC [import|process]
# On macOS, Ghidra's native decompiler must be built first (see README).
set -euo pipefail
PENTAX_GHIDRA_DIR="$(cd "$1" && pwd)"
PENTAX_ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
PENTAX_MODE="${2:-import}"
PENTAX_STATE="${TMPDIR:-/tmp}/pentax-ghidra-state"
mkdir -p "$PENTAX_STATE" "$PENTAX_ROOT/analysis/ghidra_project"
if [ "$PENTAX_MODE" = import ]; then
    PENTAX_IMPORT=(-import "$PENTAX_ROOT/analysis/extracted/main.bin" -loader BinaryLoader
        -loader-baseAddr 0x40000000 -processor ARM:LE:32:v7 -cspec default)
else
    PENTAX_IMPORT=(-process main.bin)
fi
java -Xmx2G -Djava.awt.headless=true -Djava.system.class.loader=ghidra.GhidraClassLoader \
    -Dfile.encoding=UTF8 -Duser.country=US -Duser.language=en \
    "-Duser.home=$PENTAX_STATE" "-Dapplication.settingsdir=$PENTAX_STATE" \
    "-Dapplication.cachedir=$PENTAX_STATE" \
    -cp "$PENTAX_GHIDRA_DIR/Ghidra/Framework/Utility/lib/Utility.jar" \
    ghidra.Ghidra ghidra.app.util.headless.AnalyzeHeadless \
    "$PENTAX_ROOT/analysis/ghidra_project" PentaxK1II "${PENTAX_IMPORT[@]}" \
    -noanalysis -scriptPath "$PENTAX_ROOT/analysis/tools" \
    -postScript PentaxDecompile.java "$PENTAX_ROOT" \
    -log "$PENTAX_ROOT/analysis/reports/ghidra.log" \
    -scriptlog "$PENTAX_ROOT/analysis/reports/ghidra-script.log"
