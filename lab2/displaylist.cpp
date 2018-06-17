/**
\param[in] head This fucntion only takes a pointer as an argument.

This function displays/traverses the list
This is what a linked list looks like to a user 
It traverses the list without manipulating any pointers.
See the comments for further deatils
*/
#include "lab.h"
void displaylist(NODE* head)
{
    //first we set the node pointer equal to the head pointer
    //Then while node exists this loop continues
    //Then we set the pointer equal to the next pointer 

    for(NODE* node = head; node; node = node->next)
    //This displays the data within the node
    cout << node->city << endl;
}
