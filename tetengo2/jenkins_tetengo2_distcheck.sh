#!/bin/sh

export DISTCHECK_CONFIGURE_FLAGS=" \
  --enable-precompilation \
"
export BOOST_TEST_LOG_LEVEL=warning

cd build
make -j8 distcheck
