//  Rkernel is an execution kernel for R interpreter
//  Copyright (C) 2019 JetBrains s.r.o.
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <https://www.gnu.org/licenses/>.


#ifndef EVALUATOR_H
#define EVALUATOR_H

#include <string>

#include "ScopeProtector.h"

namespace graphics {
  class Evaluator {
  public:
    static void evaluate(const std::string &command);
    static SEXP evaluate(const std::string &command, ScopeProtector *protector);
  };
}

#endif // EVALUATOR_H
