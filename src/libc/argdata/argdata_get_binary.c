// Copyright (c) 2015 Nuxi, https://nuxi.nl/
//
// This file is distrbuted under a 2-clause BSD license.
// See the LICENSE file for details.

#include <common/argdata.h>

#include <argdata.h>
#include <errno.h>

int argdata_get_binary(const argdata_t *ad, const void **value,
                       size_t *valuelen) {
  switch (ad->type) {
    case AD_BUFFER: {
      const uint8_t *buf = ad->buffer.buf;
      size_t len = ad->buffer.len;
      int error = parse_type(ADT_BINARY, &buf, &len);
      if (error != 0)
        return error;

      *value = buf;
      *valuelen = len;
      return 0;
    }
    default:
      return EINVAL;
  }
}