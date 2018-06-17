/**
This is the function to push the stack
see the individual comments to understand it more
*/
#include "lab.h"
STATUS Push(STACK &stack, int item)
{
    if (stack.sp == stack.size) //check if the stack is full
        return FAILED;
    stack.buf[stack.sp] = item; // add the element into the empty space where the stack pointer was pointing
    stack.sp++; //increment the stack pointer to add more into the stack
    return OK;
}
