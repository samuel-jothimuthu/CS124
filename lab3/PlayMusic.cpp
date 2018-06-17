/**
This function is responsible for playing the music.
its parameters are a music structure and a float value.
It uses a while loop to conrol and play notes or fragments.
See the line comments for more details
*/
#include "lab.h"
void PlayMusic (MUSICELMT music[], float tempo)
{
    const int MAXSTACK = 400, MAXARRAY = 9999;
    STACK stack;
    PLAY type;
    
    if (Create(stack, MAXSTACK) == FAILED) {
        cerr << "*** MUSIC Stack allocation error. ***\n";
        return;
    }

    int current = 0;
    int finish = MAXARRAY;
    
    
    while (OK) {
        type = music[current].type;
        
        if(current <= finish && type != PLAYSTOP){
            if(type == PLAYNOTE) {
                PlayNote(music[current++].note, tempo); //This plays the notes
                //It also updates the current pointer everytime it does
            }
            else if (type == PLAYFRAGMENT){
                Push(stack, ++current);
                //This adds elements into the array as well as increments the pointer
                Push(stack, finish);   
                //This adds elements into the array an dcitates where the end pointer is
        
                finish = music[--current].fragment.finish;
                //This is what finish is set to so that the fragment can play
                current = music[current].fragment.start;
                //This is what current is updated to once the fragment plays 
        }
    }
        else if (!IsEmpty (stack)) {
            Pop(stack, finish);
            //This pops the items at the end of the stack 
            Pop(stack, current);
            //This posp the items at the current pointer in the stack
            //This is then played
        }
        else
            break;
        
    }
    Destroy(stack);
    //Destroys the stack
}
            
            
