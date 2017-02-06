/*! \file
    \brief The common configuration for Tetengo2.

    Copy this file to the solution directory with the name "tetengo2_config.h"
    and edit it to build Tetengo2.

    Copyright (C) 2007-2014 kaoru

    $Id: 64a093b21442e3081c9f92abf7486c263f8163ff $
*/

#if !defined(TETENGO2CONFIG_H)
#define TETENGO2CONFIG_H


// Set to 1 when you are using Visual C++ Express Edition.
#define USE_VISUAL_CPP_EXPRESS_EDITION 0

// Set the Boost version.
#define BOOST_VERSION "1_63"

// Set the path where the 32-bit (Win32) version of Boost DLLs exist.
#define BOOST_LIB_Win32 "C:\data\\boost\\boost_1_63_0\\stage\\Win32\\lib"

// Set the path where the 64-bit (x64) version of Boost DLLs exist.
#define BOOST_LIB_x64 "C:\data\\boost\\boost_1_63_0\\stage\\x64\\lib"

// Set to 1 to run test programs for a Win32 (x86) platform.
#define RUN_TEST_FOR_Win32 1

// Set to 1 to run test programs for a x64 (AMD64) platform.
#define RUN_TEST_FOR_x64 1


#endif
