#include "lab.h"

/** \page "Telegraph::decode"
    \brief decodes morse code into english text
    \param[in,out] text A char array holding inputted or translated english text
    \param[in,out] morse A char array holding inputted or translated morse code
    \return void
*/
void Telegraph::decode(char morse[],char text[])
{
    char *dd;
    int count = 0;
    TNODE *node;
    
    node = root;
    for(dd = morse; *dd; dd++) {
        if(*dd == '.') 
            node = node->left;
        else if(*dd == '-')
            node = node->right;
        else if(*dd == '/') {
            node->symbol = ' ';
        }   
        else {
            text[count] = node->symbol;
            node = root;
            count++;
        }
    }
}
