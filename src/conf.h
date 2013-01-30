/*
 * Copyright (C) 2003-2011 The Music Player Daemon Project
 * http://www.musicpd.org
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef MPD_CONF_H
#define MPD_CONF_H

#include "ConfigGlobal.hxx"
#include "ConfigOption.hxx"
#include "ConfigData.hxx"
#include "gcc.h"

#include <glib.h>

#define DEFAULT_PLAYLIST_MAX_LENGTH (1024*16)
#define DEFAULT_PLAYLIST_SAVE_ABSOLUTE_PATHS false

#define MAX_FILTER_CHAIN_LENGTH 255

/**
 * A GQuark for GError instances, resulting from malformed
 * configuration.
 */
G_GNUC_CONST
static inline GQuark
config_quark(void)
{
	return g_quark_from_static_string("config");
}

#endif
