/* Copyright (c) 2012-2017 The ANTLR Project. All rights reserved.
 * Use of this file is governed by the BSD 3-clause license that
 * can be found in the LICENSE.txt file in the project root.
 */

#pragma once

#include <string_view>
#include <string>
#include "antlr4-common.h"

namespace antlrcpp {

  ANTLR4CPP_PUBLIC std::string escapeWhitespace(std::string_view in);

  ANTLR4CPP_PUBLIC std::string& escapeWhitespace(std::string& out, std::string_view in);

}
