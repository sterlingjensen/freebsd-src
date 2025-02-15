/* SPDX-License-Identifier: MIT
 *
 * Copyright (C) 2021 Jason A. Donenfeld <Jason@zx2c4.com>. All Rights Reserved.
 * Copyright (c) 2022 The FreeBSD Foundation
 *
 * compat.h contains code that is backported from FreeBSD's main branch.
 * It is different from support.h, which is for code that is not _yet_ upstream.
 */

#include <sys/param.h>

#define COMPAT_NEED_BLAKE2S

#if __FreeBSD_version < 1400059
#include <sys/sockbuf.h>
#define sbcreatecontrol(a, b, c, d, e) sbcreatecontrol(a, b, c, d)
#endif
