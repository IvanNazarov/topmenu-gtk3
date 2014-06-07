/*
 * Copyright 2014 Javier S. Pedro <maemo@javispedro.com>
 *
 * This file is part of TopMenu.
 *
 * TopMenu is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * TopMenu is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with TopMenu.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _APPMENU_H_
#define _APPMENU_H_

#include <gtk/gtk.h>

typedef struct _AppMenu
{
	GtkMenu *menu;
	GtkMenuItem *about_item;
	GtkMenuItem *prefs_item;
	GtkMenuItem *sep1_item;
	GtkMenuItem *quit_item;
} AppMenu;

GtkWidget * topmenu_appmenu_build(AppMenu *appmenu);

void topmenu_appmenu_scan_for_items(AppMenu *self, GtkMenuShell *menu_shell);

void topmenu_appmenu_destroy(AppMenu *self);

#endif
