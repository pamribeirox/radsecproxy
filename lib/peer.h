/* Copyright 2011 NORDUnet A/S. All rights reserved.
   See the file COPYING for licensing information.  */

struct rs_peer *peer_create (struct rs_context *ctx, struct rs_peer **rootp);
struct rs_peer *peer_pick_peer (struct rs_connection *conn);