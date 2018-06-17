#include "lab.h"

bool LLQUEUE::Remove (ORDER &info)
{
    if (front == 0)
        return false;
    //Get the first element out of the que
    info = front -> info;
    
    //Remove the node from the front of the queue
    NODE *next = front -> next;
    
    delete front;
    front = next;
    if (front == 0) //if the last element was removed
        rear = 0;
    
    cout << "remove " << order.items; 
    return true;
}
