/**
This file contains the code for the operator overload.
the insertion ">>" and extraction "<<" operator is what is overloaded. You can see it the load dictionary function
*//
#include "lab.h"
std::ostream & operator<<(std::ostream & o,const Entry &e)
{
    o << e.word << "\t";
    o << e.translation;
    return o;
}

std::istream & operator>>(std::istream & i,Entry &e)
{
    i >> e.word >> e.translation;
    return i;
    
}
