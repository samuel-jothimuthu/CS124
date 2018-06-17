#include "lab.h"
string RBQUEUE::traverse()
{
    string list = "\n\nDrivers: \n";
    for (int i = front; i!=rear; i++)
    {
        list += buf[i];
        list += "\n";
    }
    return list;
}
