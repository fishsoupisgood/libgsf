/* vim: set sw=8: -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*- */
/*
 * gsf-docprop-vectors.h: A type implementing OLE Document Property vectors
 *
 * Copyright (C) 2004-2005 Frank Chiulli (fc-linux@cox.net)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of version 2.1 of the GNU Lesser General Public
 * License as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
 * USA
 */

#ifndef GSF_DOCPROP_VECTOR_H
#define GSF_DOCPROP_VECTOR_H

#include <gsf/gsf.h>
#include <glib-object.h>

G_BEGIN_DECLS

#define GSF_DOCPROP_VECTOR_TYPE            (gsf_docprop_vector_get_type ())
#define GSF_DOCPROP_VECTOR(obj)            (G_TYPE_CHECK_INSTANCE_CAST((obj), GSF_DOCPROP_VECTOR, GsfDocPropVector))
#define GSF_DOCPROP_VECTOR_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST((klass), GSF_DOCPROP_VECTOR_TYPE, GsfDocPropVectorClass))
#define GSF_DOCPROP_VECTOR_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS((obj), GSF_DOCPROP_VECTOR_TYPE, GsfDocPropVectorClass))
#define IS_GSF_DOCPROP_VECTOR(obj)         (G_TYPE_CHECK_VALUE_TYPE((obj), GSF_DOCPROP_VECTOR_TYPE))
#define IS_GSF_DOCPROP_VECTOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE((klass), GSF_DOCPROP_VECTOR_TYPE))



typedef struct _GsfDocPropVectorClass GsfDocPropVectorClass;
typedef struct _GsfDocPropVector      GsfDocPropVector;


void		  gsf_docprop_vector_append (GsfDocPropVector *vector, GValue *value);
gchar		 *gsf_docprop_vector_as_string (GsfDocPropVector *vector);
GType		  gsf_docprop_vector_get_type (void);
GsfDocPropVector *gsf_docprop_vector_new (void);
GsfDocPropVector *gsf_value_get_docprop_vector (GValue const *value);
void		  gsf_value_set_docprop_vector (GValue *value, GsfDocPropVector const *vector);

G_END_DECLS

#endif /* GSF_DOCPROP_VECTOR_H */
