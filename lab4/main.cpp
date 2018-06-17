/**
This is the main function which creates the objects for the lists and structs
It also passes control to Fltk and runs the Fltk GUI. The code of the GUI can be seen in
window.cpp
*/
#include "lab.h"

ORDER order;
LLQUEUE pendingOrder;
RBQUEUE drivers;
int main()
{
    window()->show();
    Fl::add_timeout(20, deliver);
    return Fl::run();
}
