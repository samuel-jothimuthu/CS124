/** \page readData
read the first string in the file f and return it
read the file and store the valuse into the array of structs 
we store the county names 
and the AQI (airquality index of that county)
*/
#include "lab.h"

void readData(string f,  AQIData aqi[], int n)
{
    ifstream ifs (f.c_str());
    string s; char comma = ',';
    getline(ifs,s);
    for( int i = 0; i < n ; i++) {
    getline(ifs,s,','); //read and ignore the state
    getline(ifs, aqi[i].county, ',');
    getline(ifs,s,',');
    getline(ifs,s,','); //read and ignore state
    getline (ifs,s,','); //read amd ind ignore the Days of AQI
    ifs >>  aqi[i].AQI >> comma;
    getline(ifs,s);
}
    ifs.close();
}
