/**
This function is special because it creates the GUI window. This was takign up too much space in the main function 
so I split most of into here. I create three buttons and three text inputs. This is 
to enter the pizza and the drivers as well as show the queues.
*/

#include "lab.h"

Fl_Cairo_Window* cw;
Fl_Input* pizza;
Fl_Input* address;
Fl_Input* Driver;
Fl_Button* Order; 
Fl_Button* driver; 
Fl_Button* tracker;

Fl_Cairo_Window * window()
{
    cw = new Fl_Cairo_Window(w,h);
    
    cw->label("Pizza Delivery Services");
    
    cw->color(FL_GRAY);
    
    Order = new Fl_Button(200,40,70,20,"Order");
    Order->callback((Fl_Callback*)orderCb);
    
    driver = new Fl_Button(200,90,70,20,"Driver");
    driver->callback((Fl_Callback*)driverCb);
    
    tracker = new Fl_Button (150,130,90,30,"Track Order");
    tracker->callback((Fl_Callback*)showQ);
    
    pizza = new Fl_Input(80,20,100,20,"Pizza: ");
    pizza -> color(FL_WHITE);
    
    address = new Fl_Input(80,40,100,20, "Address: ");
    address-> color(FL_WHITE);
    
    Driver = new Fl_Input(80,80,100,20, "Driver: ");
    Driver-> color(FL_WHITE);
    
    return cw;
    
    
}
