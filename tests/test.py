# Keycode Map Generator Python Tests
#
# Copyright 2017 Pierre Ossman for Cendio AB
#
# This file is dual license under the terms of the GPLv2 or later
# and 3-clause BSD licenses.

import osx2win32
import osx2win32_name
import osx

assert osx2win32.code_map_osx_to_win32[0x1d] == 0x30
assert osx2win32_name.name_map_osx_to_win32[0x1d] == "VK_0"

assert osx.code_table_osx[0x1d] == 0x3b;
