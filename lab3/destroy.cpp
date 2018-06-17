/**
This is the function that destroys the stack.
it taks in stack as the parameter
*/
#include "lab.h"
STATUS Destroy(STACK &stack)
{
    delete [] stack.buf;
}
