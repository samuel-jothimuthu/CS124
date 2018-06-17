/**
This is the main function. It handles most of the control 
Every If statement is a different sort
It takes data from the html file and then and then choses which
sorting algorithm to use. 
This also reads and writes to a file called times.txt
This stores the times each sort took so we can compare the 
n^2 and n log n sort. 
We use Bubble, Selection, Insertion for n^2
and Merge and Quick sort for n log n. 
*/

#include "lab.h"
#include "SOMETYPE.hpp"
extern void list();
int main()
{
    string s = getenv("QUERY_STRING");
    string f = "/home/debian/data/aqi.csv";
    int n = countRows(f);
    AQIData* aqi = new AQIData[n];
    
    MERGESORT<AQIData> mergesort(n);
    QUICKSORT<AQIData> quicksort;
    
    readData(f,aqi,n);
    
    if(s == "o=time")
    {
          readtimes();
    }
    if(s == "o=Bubble")
    {
        cout << "Bubble Sort" << endl;
        auto t1 = std::chrono::high_resolution_clock::now();
        BubbleSort(aqi, n);
        auto t2 = std::chrono::high_resolution_clock::now();
        auto time_span = std::chrono::duration_cast<std::chrono::duration<double>>(t2-t1);
        double time = time_span.count();
        string str = "Time taken to Bubble sort in seconds: " + std::to_string(time);
        addtimes("times.txt", str); 
        for(int i = 0; i < n; i++)
        {
        cout << left << setw(7) << "County: " << left << setw(30) << aqi[i].county;
        cout  <<  "AQI Data: "<< aqi[i].AQI << endl;
        }               
    }
    if(s == "o=Selection")
    {
        cout << "Selection" << endl;
        auto t1 = std::chrono::high_resolution_clock::now();
        SelectionSort(aqi, n);
        auto t2 = std::chrono::high_resolution_clock::now();
        auto time_span = std::chrono::duration_cast<std::chrono::duration<double>>(t2-t1);
        double time = time_span.count();
        string str = "Time taken to Selection sort in seconds: " + std::to_string(time);
        addtimes("times.txt", str); 
        for(int i = 0; i < n; i++)
        {
        cout << left << setw(7) << "County: " << left << setw(30) << aqi[i].county;
        cout  <<  "AQI Data: "<< aqi[i].AQI << endl;
        }
    }
    if(s == "o=Insertion")
    {
        cout << "Insertion" << endl;
        auto t1 = std::chrono::high_resolution_clock::now();
        InsertionSort(aqi, n); 
        auto t2 = std::chrono::high_resolution_clock::now();
        auto time_span = std::chrono::duration_cast<std::chrono::duration<double>>(t2-t1);
        double time = time_span.count();
        string str = "Time taken to Insertion sort in seconds: " + std::to_string(time);
        addtimes("times.txt", str); 
        for(int i = 0; i < n; i++)
        {
        cout << left << setw(7) << "County: " << left << setw(30) << aqi[i].county;
        cout  <<  "AQI Data: "<< aqi[i].AQI << endl;
        }
    }
    if(s == "o=Merge")
    {
        cout << "Merge Sort" << endl;
        auto t1 = std::chrono::high_resolution_clock::now();
        mergesort.Sort(aqi, n);
        auto t2 = std::chrono::high_resolution_clock::now();
        auto time_span = std::chrono::duration_cast<std::chrono::duration<double>>(t2-t1);
        double time = time_span.count();
        string str = "Time taken to Merge sort in seconds: " + std::to_string(time);
        addtimes("times.txt", str);
        for(int i = 0; i < n; i++)
        {
        cout << left << setw(7) << "County: " << left << setw(30) << aqi[i].county;
        cout  <<  "AQI Data: "<< aqi[i].AQI << endl;
        }
       }
        if(s == "o=Quick")
    {
        cout << "Quick Sort" << endl;
        auto t1 = std::chrono::high_resolution_clock::now();
        quicksort.Sort(aqi, n);
        auto t2 = std::chrono::high_resolution_clock::now();
        auto time_span = std::chrono::duration_cast<std::chrono::duration<double>>(t2-t1);
        double time = time_span.count();
        string str = "Time taken to Quick sort in seconds: " + std::to_string(time);
        addtimes("times.txt", str);
        for(int i = 0; i < n; i++)
        {
        cout << left << setw(7) << "County: " << left << setw(30) << aqi[i].county;
        cout  <<  "AQI Data: "<< aqi[i].AQI << endl;
        }
    }
    
    return 0;    
}

