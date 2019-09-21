/*! \file
    \brief The common configuration for Tetengo2.

    Copy this file to the solution directory with the name "tetengo2_config.h"
    and edit it to build Tetengo2.

    Copyright (C) 2007-2019 kaoru

    $Id: c011c836bc72cf15cd2857a9eda0085570cd5453 $
*/

#if !defined(TETENGO2CONFIG_H)
#define TETENGO2CONFIG_H


// Set the Boost version.
#define BOOST_VERSION "1_69"

// Set the path where the 32-bit (Win32) version of Boost DLLs exist.
#define BOOST_LIB_Win32 "C:\\data\\boost\\boost_1_69_0\\stage\\Win32\\lib"

// Set the path where the 64-bit (x64) version of Boost DLLs exist.
#define BOOST_LIB_x64 "C:\\data\\boost\\boost_1_69_0\\stage\\x64\\lib"

// Set to 1 to run test programs for a Win32 (x86) platform.
#define RUN_TEST_FOR_Win32 1

// Set to 1 to run test programs for a x64 (AMD64) platform.
#define RUN_TEST_FOR_x64 1


#endif
