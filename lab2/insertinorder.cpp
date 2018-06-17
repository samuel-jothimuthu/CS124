/**
\param[in] head, string This functions takes in the head and a string which is whatever city the user defines

This function inserts a city into the list in a specific order. 


\image latex ../insertinorder.eps "Linked List" 
This shows how the pointers previous and next work as they traverse the 
list looking for a place to insert. Once it does it changes the pointers to add the 
value into the list
*/
#include "lab.h"

STATUS insertinorder (NODE* &head, std::string city)

{
    NODE *newnode;
     // Allocate a new node:
     
    newnode = new NODE;
    if (!newnode)
        return FAILED;
        
    // Copy the info into newnode:
    
    newnode->city = city;
    
    // LINK newnode to the list:
    // a) Find the right place to insert newnode (between "prev" and "node":
    
    NODE *NODE = head, *prev = 0;
    while (NODE && NODE->city <= city) {
        //node->city <= city
    prev = NODE;        //advance node and prev
    NODE = NODE->next;
}
    // b) Link newnode between prev and node
    
    newnode->next = NODE; //append node to newnode
    if (prev)
        prev->next = newnode; //Insert after "prev"
    else 
        head = newnode; //No prev: make new node the new head
        
        return OK;
    }
    
