/**
This is main function of the project.
Contains the three fucntions (loaddictionary, foundwords, addwords)
See comments for better understanding

*/

#include "lab.h" 

int main() //sequence control structure
{
    vector<Entry> dict;
    string word; // user inputs word
    string translation; // outputs translation
    bool ok, quit;
    
    ok = loaddictionary("dict.dat", dict);
    if (!ok) {
        cout << " **** Cannot load Dictionary ***** \n";
        return 1; //ERROR
    }
    
    
    string line;
    
 ifstream inpfile("dict.dat"); //opening file again so that once updated 
    if (!inpfile) return false; //the new information can be called without restarting the program
    
    getline(inpfile, line);
    cout << line << endl;
    cout << "Program by Samuel Jothimuthu" <<endl;

    quit = false;
    while (!quit) { //iteration control structure
        loaddictionary("dict.dat", dict);

        string choice; //simple choice of yes or no 
        string newtran; //new translation for word user enters
        string inputstring; // the full string that will be appened to the file "dict.dat"
        cout << "Enter a word or 'q' to quit ==> ";
        cin >> word;
        cin.ignore(80, '\n'); //this allows the console argument to execute but skipping the line
        if (word == "q") 
            quit = true;
        else if (foundword( dict, word, translation)) //function must return true
            cout << translation << "\n\n";
        else //The selection control structure
           { cout << word << " --not in the dictionary. \n Would you like to add it? (y/n)\n";
            cin >> choice;
            if (choice == "y") { //any other input does not work. 
                cout << "What is the Italian translation for " << word << "?" << endl;
                cin >> newtran;
                inputstring = word + "\t" + newtran; // this builds the full string that the program can then call upon.
                addwords("dict.dat", inputstring); //runs the addwords function, adding it into the file.
                }
        }
        }
        return 0;
    }
    


