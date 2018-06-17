/**
This is a pop function it pos the elements off the top of the stack
See inline comments for more clarification
*/
#include "lab.h"
STATUS Pop(STACK &stack, int &item)
{
    if (stack.sp == 0) //Check if stack is empty
        return FAILED;
    stack.sp--; //decrement stack to the bottom element with stuff in it
    item = stack.buf[stack.sp]; // set a variable to equal what is in the element to use later
    
    return OK;
}

