/*
Plugin Template for OBS Studio
Copyright (C) 2025 Norihiro Kamae

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program. If not, see <https://www.gnu.org/licenses/>
*/

#include <obs-module.h>
#include <stdlib.h>

#include "plugin-macros.generated.h"

OBS_DECLARE_MODULE()
OBS_MODULE_USE_DEFAULT_LOCALE(PLUGIN_NAME, "en-US")

const char *obs_module_name(void)
{
	return obs_module_text("Module.Name");
}

bool obs_module_load(void)
{
	int version_major = atoi(obs_get_version_string());
	if (version_major && version_major < LIBOBS_API_MAJOR_VER) {
		blog(LOG_ERROR, "Cancel loading plugin since OBS version '%s' is older than plugin API version %d",
		     obs_get_version_string(), LIBOBS_API_MAJOR_VER);
		return false;
	}

	/* TODO: Register your source-types, output-types, etc. here. */

	blog(LOG_INFO, "plugin loaded (plugin version %s, API version %d.%d.%d)", PLUGIN_VERSION, LIBOBS_API_MAJOR_VER,
	     LIBOBS_API_MINOR_VER, LIBOBS_API_PATCH_VER);
	return true;
}
