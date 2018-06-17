#include "lab.h"
void readtimes()
{
      string line;
            ifstream inpfile("times.txt");
            if (inpfile.is_open())
            {
                while (getline (inpfile, line) )
                {
                cout << line << endl;
                }
            }
        inpfile.close();
    
}
