/* SPDX-License-Identifier: LGPL-2.1+ */
#pragma once

typedef enum VolatileMode {
        VOLATILE_NO,
        VOLATILE_YES,
        VOLATILE_STATE,
        _VOLATILE_MODE_MAX,
        _VOLATILE_MODE_INVALID = -1
} VolatileMode;

VolatileMode volatile_mode_from_string(const char *s);
const char* volatile_mode_to_string(VolatileMode m);

int query_volatile_mode(VolatileMode *ret);
