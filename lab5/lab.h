#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include <chrono>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <string>
using namespace std;


struct AQIData
{
    public:
    string county;
    int AQI;
    
};


void readData(string f, AQIData aqi[], int n);

/** \page readData
\brief read some columns from file f snd store them in aqi array
\param f  filename
\param aqi array to put data in 
\param n number of elements in the array
\param 
*/
int countRows(string f);
/** \page countRows
This program will count the rows in the .csv file. 
Everytime a new row is read n( the counter) gets incremented till the end 
\param f The string that is the filename
\param out we return n the number of rows

*/

template <class AQIData>
class MERGESORT {
    
    private:
    
    AQIData *work;
    inline void Swap(AQIData &a, AQIData &b);
    void Merge (AQIData a1[], int n1, AQIData a2[], int n2);
    
    public:
    
    MERGESORT(int n) {work = new AQIData[n]; }
    
    ~MERGESORT() {delete [] work;}
    
    void Sort(AQIData a[], int n);
};

template <class AQIData>
class QUICKSORT {
    
    private: 
    
    inline void Swap(AQIData &a, AQIData &b);
    
    int Split(AQIData a[], int n);
    
    public:
    
    void Sort(AQIData a[], int n);
    
};

bool operator >=(const AQIData& lhs, const AQIData& rhs);
/** \page operator overloading
This is the operator overloading pages
I overloaded the >, <, >=, and <= operators
This was done so I could compare the AQI values specifically to one another
without having to chang the authors code
*/ 
bool operator <=(const AQIData& lhs, const AQIData& rhs);

bool operator >(const AQIData& lhs, const AQIData& rhs);

bool operator <(const AQIData& lhs, const AQIData& rhs);


template <class AQIData>
void Swap(AQIData &a, AQIData &b);
template <class AQIData>
void BubbleSort(AQIData a[], int n);

bool addtimes(string filename, string inputstring);
/** \page addtimes
\brief This function reads the times it takes for the sorting algorithms
to complete and then writes them into a file. that file is called times.txt
\param filename the filename you want to it to write to
\param inputstring the string you want to output
*/
void readtimes();
/** \page readtimes
\brief Void function to read the information in a file and dispaly it
No parameters, Called in main.
Select Time in html to see the exact output of this function
*/
