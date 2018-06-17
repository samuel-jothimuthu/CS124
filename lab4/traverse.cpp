/**
This is the code to traverse the queues an build a list that can be 
put into the GUI. This function returns the list.
A key note is that it is type string so that we can call it and 
use the return value.
*/
#include "lab.h"

string LLQUEUE::traverse (ORDER &info)
{
    string list = "Address and Order: \n";
    for(NODE *p = front; p; p = p->next)
    {
        list+=p->info.address; //
        list+=" ordered ";
        list+= p->info.items;
        list+= "\n";
        
    }
    return list;
    
}
