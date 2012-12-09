/*
 * $Id: route.h,v 1.9 2004/08/24 08:45:10 janakj Exp $
 *
 * Copyright (C) 2001-2003 FhG Fokus
 *
 * This file is part of ser, a free SIP server.
 *
 * ser is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version
 *
 * For a license to use the ser software under conditions
 * other than those described here, or to purchase support for this
 * software, please contact iptel.org by e-mail at the following addresses:
 *    info@iptel.org
 *
 * ser is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License 
 * along with this program; if not, write to the Free Software 
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */


#ifndef route_h
#define route_h

#include <sys/types.h>
#include <regex.h>
#include <netdb.h>

#include "config.h"
#include "error.h"
#include "route_struct.h"
#include "parser/msg_parser.h"

/*#include "cfg_parser.h" */


/* main "script table" */
extern struct action* rlist[RT_NO];
/* main reply route table */
extern struct action* onreply_rlist[RT_NO];
extern struct action* failure_rlist[RT_NO];


void push(struct action* a, struct action** head);
int add_actions(struct action* a, struct action** head);
void print_rl();
int fix_rls();

int eval_expr(struct expr* e, struct sip_msg* msg);






#endif
