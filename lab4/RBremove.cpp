#include "lab.h"

bool RBQUEUE::Remove (string &s)
{
    if (isEmpty()) return false;
    s = buf[front];
    front = nextIndex(front);
    cout << "remove " << s; 
    return true;
    
}
