/**
A boolean function that looks for the word in the the dictionary file
\param[in] dict a reference to the vector Entries
\param[in] word a reference to the word in the vector
\param[in] translation a reference to the translation in the vector
\param[out] translation the translated word can then be output
\returns a boolean value if the function worked successfully 
*/
#include "lab.h"
bool foundword(const vector<Entry> &dict, const string &word, string &translation)
{
    bool found = false;
    int i, len = dict.size(); //length of the size of the vector
    
    for(i = 0; !found && i < len; i++) 
    {
        if (dict[i].word == word) {
            translation = dict[i].translation; //this sets the translation in the file to the translation variable allowing to ouput
            found = true;
        }
    }
    return found;
}
