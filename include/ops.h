#ifndef ILU_OPS_H
#define ILU_OPS_H

enum OpType 
{
    OP_PUSH,
    OP_DUMP,
    OP_PLUS,
    OP_MINUS,
};
    
class Op
{
public:
    OpType type;
    int n;
};

Op push(int n);
Op plus();
Op minus();
Op dump();

#endif