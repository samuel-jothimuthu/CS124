
#include "lab.h" 

STATUS builddirectly(NODE* &head, string cities)
{
    string city;
    NODE* tail; 
    ifstream ifs("cities");
    if (! ifs) 
    return FAILED;
    
while(ifs >> city) {
    NODE *newnode = new NODE;
    if(!newnode)
    return FAILED;
    
    newnode->city = city;
    
    newnode->next = 0;
    
     if(!tail) {
        head = newnode;}
    else {
        tail->next = newnode;
    }
    tail = newnode;
    
}
}
