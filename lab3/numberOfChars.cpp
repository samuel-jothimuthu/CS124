/**
This program counts the number of chareters in the abc notion
*/
#include "lab.h"
int numberofchars(std::ifstream &f)
{
    int n = 0;
    //count characters
    char c;
    while(f >> c)
        n++;
    return n;
}
