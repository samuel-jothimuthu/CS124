/**
This is the function that adds unknown words the user inputs back into the dictionary
\param[in] filename the name of the file
\param[in] inputstring the new string created by the user and added to the file
\param[out] inputstring is now added into the dictionary
\returns a boolean to check if the process was successful 
*/
#include "lab.h"

bool addwords(string filename, string inputstring) 
{
    //string test = "test"; //to test the fucntion worked
    ofstream inpfile(filename, ios::app); //opens the file to write; to append the information to it
    inpfile << inputstring << endl;
    inpfile.close(); //closes the filestream
    cout << "word added" <<endl;
    return true;
    
}
