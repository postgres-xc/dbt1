/*
 * refreshSC.h 
 *
 * This file is released under the terms of the Artistic License.  Please see
 * the file LICENSE, included in this package, for details.
 *
 * Copyright (C) 2002 Mark Wong & Jenny Zhang &
 *                    Open Source Development Lab, Inc.
 * Copyright (C) 2005 Koji Fukui
 *                    Sumisho Computer Systems Corporation
 *
 */

#ifndef _refreshSC_H
#define _refreshSC_H

#include <interaction.h>
#include <libpq-fe.h>

#define STMT_refreshSC_del \
	"DELETE FROM shopping_cart_line "\
	"WHERE scl_sc_id=%lld "\
		"AND scl_i_id =%lld "\
		"AND scl_c_id =%lld;" /* pgxc additional */
#define STMT_refreshSC_upd \
	"UPDATE shopping_cart_line "\
	"SET scl_qty=%d "\
	"WHERE  scl_sc_id=%lld "\
		"AND  scl_i_id =%lld "\
		"AND  scl_c_id =%lld;" /* pgxc additional */

int refreshSC(struct db_context_t *,
			  struct shopping_cart_t *);

#endif /* _refreshSC_H */
