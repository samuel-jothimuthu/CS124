/**
This function reads the song as a whole
It uses 2 indicators for readings a fragment or a note
For note it takes in its tone and duration
and for fragment it takes in its start and finish
This function is read in main
*/
#include "lab.h"
void readsong(std::ifstream &f, MUSICELMT m[], int n)
{
    int i = 0;
    char type;
    while(f>> type)
     {
        if(type == 'r') {
            f >> m[i].note.tone >> m[i].note.duration;
            m[i].type = PLAYNOTE;
        }
        else if (type == 'f') {
            f >> m[i].fragment.start >> m[i].fragment.finish;
            m[i].type = PLAYFRAGMENT;
    }
    i++;
}
    
    m[i].type = PLAYSTOP;
}
