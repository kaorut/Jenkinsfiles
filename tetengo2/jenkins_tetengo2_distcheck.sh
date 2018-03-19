#!/bin/sh

export DISTCHECK_CONFIGURE_FLAGS=" \
  --with-clang-format=clang-format-5.0 \
  CC=clang-5.0 \
  CXX=clang++-5.0 \
"
export BOOST_TEST_LOG_LEVEL=warning

cd build
make -j8 distcheck
