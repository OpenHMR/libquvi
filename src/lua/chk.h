/* libquvi
 * Copyright (C) 2012,2013  Toni Gundogdu <legatvs@gmail.com>
 *
 * This file is part of libquvi <http://quvi.sourceforge.net/>.
 *
 * This library is free software: you can redistribute it and/or
 * modify it under the terms of the GNU Affero General Public
 * License as published by the Free Software Foundation, either
 * version 3 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General
 * Public License along with this library.  If not, see
 * <http://www.gnu.org/licenses/>.
 */

#ifndef l_chk_h
#define l_chk_h

gboolean l_chk_can_parse_url(lua_State*, _quvi_script_t, const gchar*,
                             const gchar*, const gchar*);

gboolean l_chk_assign_s(lua_State*, const gchar*, GString*, gboolean,
                        gboolean);
gboolean l_chk_s(lua_State*, const gchar*, gchar**, gboolean, gboolean);

gboolean l_chk_assign_n(lua_State*, const gchar*, gdouble*);
gboolean l_chk_n(lua_State*, const gchar*, gdouble*);

gboolean l_chk_assign_b(lua_State*, const gchar*, gboolean*);
gboolean l_chk_b(lua_State*, const gchar*, gboolean*);

#endif /* l_chk_h */

/* vim: set ts=2 sw=2 tw=72 expandtab: */
