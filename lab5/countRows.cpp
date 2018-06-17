#include "lab.h"
int countRows(string f)
{
    std::ifstream ifs(f.c_str());
    int n = 0;
    string s;
    while(getline(ifs,s)) n++;
    
    
    return n;
}
