#!/bin/sh

SOURCE_TOP=$1

export DISTCHECK_CONFIGURE_FLAGS=" \
  --enable-precompilation \
  --with-tetengo2-includedir=$SOURCE_TOP/lib/tetengo2/tetengo2/include \
  --with-tetengo2-libdir=$SOURCE_TOP/lib/tetengo2/tetengo2/src \
  --with-tetengo2-detail-includedir=$SOURCE_TOP/lib/tetengo2/tetengo2_detail/include \
  --with-tetengo2-detail-libdir=$SOURCE_TOP/lib/tetengo2/tetengo2_detail/src \
  --with-tetengo2-gui-includedir=$SOURCE_TOP/lib/tetengo2/tetengo2_gui/include \
"
export BOOST_TEST_LOG_LEVEL=warning

cd build
make -j8 distcheck
