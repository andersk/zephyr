/* This file is part of the Project Athena Zephyr Notification System.
 * It contains source for the ZParseNotice function.
 *
 *	Created by:	Robert French
 *
 *	$Source$
 *	$Author$
 *
 *	Copyright (c) 1987 by the Massachusetts Institute of Technology.
 *	For copying and distribution information, see the file
 *	"mit-copyright.h". 
 */
/* $Header$ */

#ifndef lint
static char rcsid_ZParseNotice_c[] = "$Header$";
#endif lint

#include <zephyr/mit-copyright.h>

#include <zephyr/zephyr_internal.h>

Code_t ZParseNotice(buffer,len,notice)
	ZPacket_t	buffer;
	int		len;
	ZNotice_t	*notice;
{
	extern int ZCheckAuthentication();

	return (Z_InternalParseNotice(buffer,len,notice));
}
