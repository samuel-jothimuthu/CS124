/**
    \brief Insert inserts a new node at the beginning of the list 
    \param[in,out] head The head of the linked list
    \param[in] city The data in the node being inserted
    \return A STATUS indicating if Insert was successful of not
    \image latex ../insert.eps "Linked List" 
*/
#include "lab.h"

STATUS insert(NODE* &head, std::string city)
{
    //city = "Dublin"
    NODE *newnode;
    
    // Allocate a new node:
    
    newnode = new NODE;
    if (!newnode)
        return FAILED; 
    //copy the info into the new node:
    
    newnode->city = city;
    
    //Link the new node to the list:
    
    newnode->next = head;
    head = newnode; 
    
    return OK; 
}
