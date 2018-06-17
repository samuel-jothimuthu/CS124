#include <iostream>
#include <string>
#include "config.h"
#include <FL/Fl_Cairo_Window.H> 
#include <FL/Fl_Input.H> 
#include <FL/Fl_Button.H> 
#include <FL/fl_ask.H> 
#include <FL/Fl_Output.H>
#include <sstream>
#include <iomanip>
#include <Fl/Fl_Text_Display.H>
#include <Fl/Fl_Text_Buffer.H>
using namespace std;

const int w = 300, h = 300;
const int BUFSIZE = 10;

void orderCb(Fl_Callback,void*);
void driverCb(Fl_Callback, void*);
void showQ(Fl_Callback*, void*);
void deliver(void*);


Fl_Cairo_Window * window();
extern Fl_Input* pizza;
extern Fl_Input* address;
extern Fl_Input* Driver;
extern Fl_Output* watch; 
extern Fl_Text_Buffer* buff;
extern Fl_Text_Display* orderQ;

struct ORDER {
    string address;
    string items;
};

struct NODE {
    ORDER info;
    NODE *next;
};

class LLQUEUE {
    private:
        NODE *front;
        NODE *rear;
    public:
        LLQUEUE() {front = rear = 0;} //Initialize the pointers to null
        ~LLQUEUE() { //destructor (default)
            NODE *next;
            
            while (front) {
                next = front->next;
                delete front;
                front = next;
                }
            } 
        bool Insert (ORDER &info);
        bool Remove (ORDER &info);
        bool isEmpty() {return (front == 0);}
        string traverse(ORDER &info);
};

class RBQUEUE {
    private:
        string buf[BUFSIZE];
        int front;
        int rear;
        int nextIndex(int index) { //Calculate and returns value of 
                                    //the next index with wrap-around
            if (++index == BUFSIZE) index = 0;
            return index; }
    public: 
        RBQUEUE() {front = rear = 0;}
        ~RBQUEUE() {}
        bool Insert (string s);
        bool Remove (string &s);
        bool isEmpty() {return (front == rear); }
        bool isFull() {return (nextIndex(rear) == front);}
        string traverse();
};

extern ORDER order;
extern LLQUEUE pendingOrder;
extern RBQUEUE drivers;








