#include "lab.h"

STATUS Create(STACK & stack, int size)
{
    stack.buf = new int[size];
    if (!stack.buf)
        return FAILED;
    stack.size = size;
    stack.sp = 0;
    return OK;
}
