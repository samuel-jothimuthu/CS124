#include "lab.h"

/** \page "Telegraph:encode"
    \brief encodes an english message into morse code
    \param[in,out] text A char array holding inputted or translated english text
    \param[in,out] morse A char array holding inputted or translated morse code
    \return void 
*/
void Telegraph::encode(char text[],char morse[])
{
    int i;
    char c, *t, *dd; // t points to text
                     // dd points to a string of dots and dashes
    for(t = text; *t; t++)
    {
        
        c = toupper(*t);
        
        // If space, add a space to the morse string:
        if(c == ' ') {
            *morse++ = '/';
            *morse++ = ' ';
            continue;
        }
        
        // Find this symbol in the MORSECODE table
        // skip this symbol if not found:
        for(i = 0; table[i].symbol; i++)
            if(table[i].symbol == c) break;
        if(!table[i].symbol) continue;
        
        // Copy its code into the morse string:
        dd = table[i].code;
       
        while(*dd) *morse++=*dd++;
        
        // Add one space to separate letters:
        *morse++ = ' ';
    }
    *morse = '\0';
}
