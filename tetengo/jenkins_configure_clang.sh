#!/bin/sh

SOURCE_TOP=$1

export DISTCHECK_CONFIGURE_FLAGS=" \
  --with-clang-format=clang-format-5.0 \
  CC=clang-5.0 \
  CXX=clang++-5.0 \
"

./bootstrap.sh
mkdir build
cd build
../configure $DISTCHECK_CONFIGURE_FLAGS
