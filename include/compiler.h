#ifndef ILU_COMPILER_H
#define ILU_COMPILER_H

#include "ops.h"
#include "file.h"
#include <vector>
#include <string>
#include <ios>
#include <sstream>

void compile_to_asm(std::vector<Op> program, std::string output_file);

#endif
