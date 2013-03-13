/*  RetroArch - A frontend for libretro.
 *  Copyright (C) 2010-2013 - Hans-Kristian Arntzen
 *  Copyright (C) 2011-2013 - Daniel De Matteis
 * 
 *  RetroArch is free software: you can redistribute it and/or modify it under the terms
 *  of the GNU General Public License as published by the Free Software Found-
 *  ation, either version 3 of the License, or (at your option) any later version.
 *
 *  RetroArch is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 *  without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 *  PURPOSE.  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along with RetroArch.
 *  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef CONSOLE_EXT_INPUT_H__
#define CONSOLE_EXT_INPUT_H__

#include "../driver.h"

enum keybind_set_id
{
   KEYBIND_NOACTION = 0,
   KEYBIND_DECREMENT,
   KEYBIND_INCREMENT,
   KEYBIND_DEFAULT
};

const char *rarch_input_find_platform_key_label(uint64_t joykey);
void rarch_input_set_keybind(unsigned player, unsigned keybind_action, uint64_t default_retro_joypad_id);

#endif
