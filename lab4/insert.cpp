#include "lab.h"

bool LLQUEUE::Insert (ORDER &info)
{
    NODE *newnode = new NODE;
    
    if(!newnode)
        return false;
        
    newnode->info=info;
    
    newnode->next=0;
    
    if(rear == 0)
        front = rear = newnode;
    else {
        rear->next = newnode;
        rear = newnode;
    }
    cout << "insert " << order.items; 
    return true;
}
