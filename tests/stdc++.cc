/*
 * Keycode Map Generator C++ Tests
 *
 * Copyright 2017 Pierre Ossman for Cendio AB
 *
 * This file is dual license under the terms of the GPLv2 or later
 * and 3-clause BSD licenses.
 */

#include <assert.h>
#include <string.h>

#include "osx2win32.hh"
#include "osx2win32_name.hh"
#include "osx.hh"
#include "osx_name.hh"

int main(int argc, char** argv)
{
	assert(code_map_osx_to_win32[0x1d] == 0x30);
	assert(strcmp(name_map_osx_to_win32[0x1d], "VK_0") == 0);

	assert(code_table_osx[0x1d] == 0x3b);
	assert(strcmp(name_table_osx[0x1d], "Control") == 0);

	return 0;
}
