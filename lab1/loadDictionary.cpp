/**
\param[in] the filename of the dictionary
\param[in] dict a reference to a vector of Entries
\return a boolean that indicates if the file was opened successfully
*/
#include "lab.h"
bool loaddictionary(string filename, vector<Entry> &dict)
{
    
    
    ifstream inpfile(filename.c_str()); //opening file
    if (!inpfile) return false;
    
    
    Entry e; // structure e declared
    while (inpfile >> e) { //operator overloading done here
        dict.push_back(e);
        inpfile.ignore(80, '\n'); // skip the rest of the line
        
    }
    
    
    return true;
}


