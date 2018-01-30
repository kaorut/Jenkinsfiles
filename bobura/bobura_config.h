/*! \file
    \brief The common configuration for bobura.

    Copy this file to the solution directory with the name "bobura_config.h"
    and edit it to build bobura.

    Copyright (C) 2007-2017 kaoru

    $Id: 4381d60dc6c8dcf823dbed8111212358ec0faa19 $
*/

#if !defined(BOBURACONFIG_H)
#define BOBURACONFIG_H


// Set the Boost version.
#define BOOST_VERSION "1_66"

// Set the path where the 32-bit (Win32) version of Boost DLLs exist.
#define BOOST_LIB_Win32 "C:\\data\\boost\\boost_1_66_0\\stage\\Win32\\lib"

// Set the path where the 64-bit (x64) version of Boost DLLs exist.
#define BOOST_LIB_x64 "C:\\data\\boost\\boost_1_66_0\\stage\\x64\\lib"

// Set the path where Visual C++ Redistributable merge modules exist.
#define VC_REDIST_PATH "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\Redist\MSVC\14.12.25810\MergeModules"

// Set the EmbedTransform tool directory.
#define EMBEDTRANSFORM_DIR "C:\\Program Files (x86)\\embedtransform"

// Set to 1 to run test programs for a Win32 (x86) platform.
#define RUN_TEST_FOR_Win32 1

// Set to 1 to run test programs for a x64 (AMD64) platform.
#define RUN_TEST_FOR_x64 1


#endif
