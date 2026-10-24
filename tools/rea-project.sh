#!/bin/sh
# Use the project's REA/Ghidra and Homebrew's registered JDK 21.
set -eu
task_root=$(CDPATH= cd -- "$(dirname -- "$0")/.." && pwd)
task_java=$(/usr/libexec/java_home -v 21)
mkdir -p "$task_root/.cache/tmp" "$task_root/.cache/swift-modules"
export GHIDRA_INSTALL_DIR="$task_root/.tools/ghidra"
export JAVA_HOME="$task_java"
export TMPDIR="$task_root/.cache/tmp/"
export REA_DARWIN_MODULE_CACHE_PATH="$task_root/.cache/swift-modules"
exec "$task_root/.tools/rea/node_modules/.bin/rea" "$@"
