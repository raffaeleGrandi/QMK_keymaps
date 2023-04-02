/* Copyright 2015-2016 Matthias Schmidtt
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef KEYMAP_ITALIAN_MAC
#define KEYMAP_ITALIAN_MAC

#include "keymap_italian.h"

#define MI_LCMD   KC_LCTL
#define MI_LCTL   KC_LCMD
#define MI_OPT    KC_LALT
#define MI_LESS   IT_BKSL
#define MI_MORE   LSFT(IT_BKSL)
#define MI_PIPE   IT_MORE
#define MI_BKSL   IT_LESS
#define MI_DEL    KC_LCMD(KC_BSPC) 

#endif
