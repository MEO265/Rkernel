#!/bin/bash
set -euo pipefail

CMAKE="${CMAKE:-cmake}"

if [ ! -d grpc ]; then
  ./build_grpc.sh
fi

if [ ! -d gens/protos ]; then
  mkdir -p gens/protos
fi

rm -rf Rkernel-proto
cp -rp ../protos Rkernel-proto

chmod -R +x grpc/tools
if [[ "$OSTYPE" == "linux-gnu" ]]; then
  PACKAGE_NAME="x64-linux"
else
  PACKAGE_NAME="x64-osx"
fi

# patch Rcpp
(
  cd Rcpp
  if ! patch -R -p1 -s -f --dry-run <../Rcpp-patches/*.patch; then
    patch -p1 <../Rcpp-patches/*.patch
  fi
)

mkdir -p build
cd build
if [ -e "crashpad/crashpad" ]; then
  $CMAKE -Wdev -DCRASHPAD_DIR="$(pwd)/crashpad" .. "$@"
else
  $CMAKE -Wdev .. "$@"
fi
make -j4
mv rwrapper ../rwrapper-$PACKAGE_NAME
