/* SPDX-License-Identifier: LGPL-2.1+ */
#pragma once

/***
  This file is part of systemd.

  Copyright 2010 Lennart Poettering

  systemd is free software; you can redistribute it and/or modify it
  under the terms of the GNU Lesser General Public License as published by
  the Free Software Foundation; either version 2.1 of the License, or
  (at your option) any later version.

  systemd is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public License
  along with systemd; If not, see <http://www.gnu.org/licenses/>.
***/

#include <stdbool.h>

#if 0 /// UNNEEDED by elogind
int mount_setup_early(void);
#endif // 0
int mount_setup(bool loaded_policy);

#if 0 /// UNNEEDED by elogind
int mount_cgroup_controllers(char ***join_controllers);

bool mount_point_is_api(const char *path);
bool mount_point_ignore(const char *path);
#endif // 0
