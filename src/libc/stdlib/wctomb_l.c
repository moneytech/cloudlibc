// Copyright (c) 2016 Nuxi, https://nuxi.nl/
//
// This file is distributed under a 2-clause BSD license.
// See the LICENSE file for details.

#include <common/locale.h>

#include <stdlib.h>

int wctomb_l(char *s, wchar_t wchar, locale_t locale) {
  // This implementation does not support any state-dependent encodings.
  if (s == NULL)
    return 0;

  const struct lc_ctype *ctype = locale->ctype;
  return ctype->c32tomb(s, wchar, ctype->data);
}
