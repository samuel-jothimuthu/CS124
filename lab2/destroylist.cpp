/**
\param[in] head This is the only parameter the function takes.


This function completely destroys the list.


\image latex ../destroylist1.eps "Linked List" 
As you can see that this function points the head at the node and then 
deletes it severing the tie to the list
*/
#include "lab.h"
void destroylist(NODE* head)
{
    NODE* node;
    for(node = head; node; node = node->next)
    {
        cout << "deleting: "
            << node->city << std::endl;
        NODE* tmp = head->next;
        delete head;
        head = tmp;
        
    }
    
}
