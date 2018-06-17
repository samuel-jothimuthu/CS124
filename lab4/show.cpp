/**
This function shows the the queues when the user presses Track order in the GUI.
This function shows the addresses and the pizza as well as the drivers that are available.
*/
#include "lab.h"

void showQ(Fl_Callback*, void*)
{
    string orderlist;
    string driverlist;
    
    static Fl_Cairo_Window trackWindow(200, 200); //Build the window
    trackWindow.label("Tracking Orders");
    static Fl_Text_Buffer buff;
    static Fl_Text_Display OrderQ(0,0, 200,200, "Track Order:");
    OrderQ.buffer(&buff);
    
    string o = pendingOrder.traverse(order); //using the traverse fucntion to creat the list
    string d = drivers.traverse();
    o+=d;//This creates the list of Orders and Drivers
    
    buff.text(o.c_str());
    trackWindow.add(OrderQ);
    trackWindow.show(); //Displays the window
}
    
