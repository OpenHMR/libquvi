/* libquvi
 * Copyright (C) 2013  Toni Gundogdu <legatvs@gmail.com>
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

#ifndef m_subtitle_h
#define m_subtitle_h

gpointer m_subtitle_new(_quvi_t, const gchar*);
void m_subtitle_free(_quvi_subtitle_t);

void m_subtitle_type_free(_quvi_subtitle_type_t);
void m_subtitle_lang_free(_quvi_subtitle_lang_t);

#endif /* m_subtitle_h */

/* vim: set ts=2 sw=2 tw=72 expandtab: */
