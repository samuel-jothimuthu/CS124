/**
This is the driver callback function which is similar to the order one
This inserts the drivers into the que 
and allows it to be displayed.
*/
#include "lab.h"

void driverCb (Fl_Callback*, void*)
{
    drivers.Insert(Driver->value());
}
