/**
This function loads the dictionary into a linked list
it takes the filename "cities" and loads that as cities the variable
Then it uses the insert function to create the list after the head pointer.
Then at the end it returns head so that we can use it in other functions.

*/
#include "lab.h"
NODE* loadlist(std::string filename)
{
    NODE* head = 0; // this is where we declare the head as null to create the list
    std::ifstream ifs(filename.c_str());
    string city;
    while(ifs >> city) 
        if(insert(head,city) == FAILED)
         cerr << "error on insert\n";
         
    return head;
}
