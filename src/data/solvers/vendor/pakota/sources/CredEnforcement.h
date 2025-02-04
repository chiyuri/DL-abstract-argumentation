/*!
 * Copyright (c) <2017> <Andreas Niskanen, University of Helsinki>
 * 
 * 
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * 
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * 
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef CREDENFORCEMENT_H
#define CREDENFORCEMENT_H

#include "ArguFramework.h"

namespace CredEnforcement {

/*!
 * MaxSAT clauses for credulous status enforcement under admissible and stable semantics.
 */
std::vector<std::vector<int>> admissible_clauses(AF& af);
std::vector<std::vector<int>> stable_clauses(AF& af);

/*!
 * Main function for credulous status enforcement.
 *
 * af - argumentation framework with enforcement request
 * sem - semantics (adm or stb)
 * outfile - if specified, output the clauses to outfile and exit
 * type - type of outfile (wncf or lp)
 */
AF enforce(AF& af, std::string sem, std::string outfile, std::string type);

}

#endif