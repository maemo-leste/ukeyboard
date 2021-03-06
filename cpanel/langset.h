/*
 *  Copyright (c) 2008 Jiri Benc <jbenc@upir.cz>
 *  Copyright (c) 2009 Roman Moravcik <roman.moravcik@gmail.com>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2 as
 *  published by the Free Software Foundation.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef _LANGSET_H
#define _LANGSET_H

gboolean get_l_bool(GConfClient *client, char *lang, char *key);
void set_l_bool(GConfClient *client, char *lang, char *key, gboolean val);
gchar *get_l_str(GConfClient *client, char *lang, char *key);
void set_l_str(GConfClient *client, char *lang, char *key, gchar *val);
GList *get_dicts(GList *langs);
void fill_dict(HildonTouchSelector *combo, GList *langs, gchar *deflang);

#endif
