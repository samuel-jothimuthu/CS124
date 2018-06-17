#include "lab.h"

bool RBQUEUE::Insert(string s)

{
    if (isFull()) return false;
    buf[rear] = s;
    rear = nextIndex(rear);
    return true;
    cout << "insert " << s; 
}
