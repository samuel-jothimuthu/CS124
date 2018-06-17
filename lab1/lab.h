/**

This is the header file 
it contains include statements,
the structure "Entry",
3 function prototypes,
and 2 opperator overlaods
 
*/
#include <iostream> 
#include <fstream>
#include <vector>
using namespace std;
struct Entry {
    string word;
    string translation;
};

std::ostream & operator<<(std::ostream & o,const Entry &e);


std::istream & operator>>(std::istream & i,Entry &e);

//function prototypes:
bool loaddictionary(string filename, vector<Entry> &dict);
bool foundword(const vector<Entry> &dict, const string & word, string &translation);
bool addwords(string filename, string inputstring);
