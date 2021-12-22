#ifndef ILU_OPS_H
#define ILU_OPS_H

#include "token.h"
#include <string>

enum OpType 
{
    OP_PUSH,
    OP_DUMP,
    // arithmetics
    OP_PLUS,
    OP_MINUS,
    OP_MUL,
    OP_DIV,
    // comparisons
    OP_EQUAL,
    OP_GREATER,
    OP_LESS,
    OP_GREATER_EQ,
    OP_LESS_EQ,
    // stack manipulation
    OP_POP, 
    OP_DUP,  // [a] -> [a, a]
    OP_SWP,  // [a, b] -> [b, a]
    OP_ROT,  // [a, b, c] -> [b, c, a]
    OP_OVER, // [a, b] -> [a, b a]
    // memory management
    OP_MEM,
    OP_READ,
    OP_WRITE,
    // bitwise
    OP_SHIFT_RIGHT,
    OP_SHIFT_LEFT,
    OP_ORB,
    OP_ANDB,
    // syscall ops for number of args to pop from stack
    // ex: syscall3: rax (syscall number), rdi, rsi, rdx
    // ex: syscall5: rax (syscall number), rdi, rsi, rdx, r10, r8
    OP_SYSCALL1,
    OP_SYSCALL2,
    OP_SYSCALL3,
    OP_SYSCALL4,
    OP_SYSCALL5,
    OP_SYSCALL6,
    // keywords
    OP_WHILE,
    OP_DO,
    OP_IF,
    OP_ELSE,
    OP_END,
};
    
class Op
{
public:
    Op(OpType type, Token token) :
        type(type),
        file_location(token.file_location), 
        line(token.line),
        line_number(token.line_number), 
        column_number_start(token.column_number_start),
        column_number_end(token.column_number_end)
    {}

    Op(OpType type, int push_val, Token token) :
        type(type), 
        file_location(token.file_location), 
        line(token.line),
        line_number(token.line_number), 
        column_number_start(token.column_number_start),
        column_number_end(token.column_number_end),
        push_val(push_val) 
    {}

    OpType type;
    int push_val, reference_ip, line_number, column_number_start, column_number_end;
    std::string file_location, line;
};

#endif
