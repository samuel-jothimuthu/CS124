#include "lab.h"
bool addtimes(string filename, string inputstring) 
{
    
    ofstream inpfile(filename, ios::app); 
    inpfile << inputstring << endl;
    inpfile.close();
    return true;
}
