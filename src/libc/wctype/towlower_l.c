// Copyright (c) 2015 Nuxi, https://nuxi.nl/
//
// SPDX-License-Identifier: BSD-2-Clause

#include <wctype.h>

#include "wctype_impl.h"

wint_t towlower_l(wint_t wc, locale_t locale) {
  wint_t nwc = towlower(wc);
  return valid_in_locale(nwc, locale) ? nwc : wc;
}
