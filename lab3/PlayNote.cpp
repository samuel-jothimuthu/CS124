/**
This function plays the individual notes and fragments
This creates a single string that the console can read as
an instruction to play the note for a set duration
*/
#include "lab.h"
void PlayNote(NOTE &note, float tempo)
{
    std::string s1 = "play -qn synth ";
    std::string s2 = " pluck ";
    
    string ms = s1 + std::to_string(note.duration/16.0) +
                    s2 + note.tone;
        cout << ms << endl;
        system(ms.c_str());
    
    
    
}
