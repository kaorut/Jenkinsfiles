/*! \file
    \brief The common configuration for bobura.

    Copy this file to the solution directory with the name "bobura_config.h"
    and edit it to build bobura.

    Copyright (C) 2007-2015 kaoru

    $Id: 384da03d8afd41679a11bce4093ed65caac2bd66 $
*/

#if !defined(BOBURACONFIG_H)
#define BOBURACONFIG_H


// Set the Visual C++ Redistributable version.
#define VC_REDIST_VERSION "140"

// Set the Boost version.
#define BOOST_VERSION "1_65_1"

// Set the path where the 32-bit (Win32) version of Boost DLLs exist.
#define BOOST_LIB_Win32 "C:\\data\\boost\\boost_1_65_1\\stage\\Win32\\lib"

// Set the path where the 64-bit (x64) version of Boost DLLs exist.
#define BOOST_LIB_x64 "C:\\data\\boost\\boost_1_65_1\\stage\\x64\\lib"

// Set the EmbedTransform tool directory.
#define EMBEDTRANSFORM_DIR "C:\\Program Files (x86)\\embedtransform"

// Set to 1 to run test programs for a Win32 (x86) platform.
#define RUN_TEST_FOR_Win32 1

// Set to 1 to run test programs for a x64 (AMD64) platform.
#define RUN_TEST_FOR_x64 1


#endif
