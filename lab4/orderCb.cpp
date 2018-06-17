/**
This the the order fucntion. 
This adds the ordered elements into the list.
*/
#include "lab.h"
void orderCb(Fl_Callback*,void*)
{
    order.address = address->value();
    order.items = pizza->value();
    pendingOrder.Insert(order); //Where the data is inserted
    
}
