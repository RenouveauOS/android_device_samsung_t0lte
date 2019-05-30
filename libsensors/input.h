/*
 * Copyright (C) 2019 Răileanu Cosmin <comico_work@outlook.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
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


void input_event_set(struct input_event *event, int type, int code, int value);
int64_t getTimestamp();
int64_t timestamp(struct timeval *time);
int64_t input_timestamp(struct input_event *event);
int uinput_rel_create(const char *name);
int input_open(char *name);
int sysfs_path_prefix(char *name, char *path_prefix);
int64_t sysfs_value_read(char *path);
int sysfs_value_write(char *path, int64_t value);
int sysfs_string_read(char *path, char *buffer, size_t length);
int sysfs_string_write(char *path, char *buffer, size_t length);