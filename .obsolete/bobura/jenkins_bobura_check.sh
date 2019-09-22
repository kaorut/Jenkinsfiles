#!/bin/sh

export BOOST_TEST_LOG_LEVEL=warning

cd build
make -j8 check
