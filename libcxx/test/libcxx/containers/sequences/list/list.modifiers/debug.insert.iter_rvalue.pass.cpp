//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

// <list>

// iterator insert(const_iterator position, value_type&& x);

// REQUIRES: has-unix-headers
// UNSUPPORTED: !libcpp-has-legacy-debug-mode, c++03

#include <list>

#include "check_assertion.h"

int main(int, char**) {
  std::list<int> v1(3);
  std::list<int> v2(3);
  TEST_LIBCPP_ASSERT_FAILURE(
      v1.insert(v2.begin(), 4), "list::insert(iterator, x) called with an iterator not referring to this list");

  return 0;
}
