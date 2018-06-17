/**
This function will put out alerts when drivers or Orders are ready
See the comments for more details. The message displayed is based on which
of the queues are empty. This wee then cause the message to be displayed. 
*/

#include "lab.h"

void deliver(void*)
{
    
    string driverName;
    
    
    if(!pendingOrder.isEmpty() && !drivers.isEmpty())
    {
        drivers.Remove(driverName);
        pendingOrder.Remove(order);
        
        string alert = driverName + ", deliver one " + order.items
        + " pizza at " + order.address; // create the string for the alert
        
        cout << alert << endl;
        
        fl_message_title("Pizza Time!");
        fl_message(alert.c_str()); //add in the message
        Fl::repeat_timeout(5.0,deliver); //display it
        
    }
    
    else if (!pendingOrder.isEmpty() && drivers.isEmpty())
    {
        
        string alert1 ="Delivery for one " + order.items
        + " pizza at " + order.address; //Create the string for the message
        
        cout << alert1 << endl;
        
        fl_message_title("Pizza Time!");
        fl_message(alert1.c_str()); // Add the message into the alert
        Fl::repeat_timeout(5.0,deliver); //display it
        
        
        
    }
    
     else if (pendingOrder.isEmpty() && !drivers.isEmpty())
    {
        
        string alert2 = driverName + " is now available";
        
        cout << alert2 << endl;
        
        fl_message_title("Pizza Time!");
        fl_message(alert2.c_str());
        Fl::repeat_timeout(5.0,deliver);
        
        
        
    }


}
