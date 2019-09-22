#!/bin/sh

export DISTCHECK_CONFIGURE_FLAGS=" \
  CC=clang-7 \
  CXX=clang++-7 \
"
export BOOST_TEST_LOG_LEVEL=warning

cd build
make -j8 distcheck
make -j8 dist-bzip2
make -j8 dist-zip
