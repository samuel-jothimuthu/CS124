/**
This is the main function of the music program.
This function call all the other files and uses them to play the song.
See the individual commetns to see what everything does
*/
#include "lab.h"
int main()
{
    std::ifstream ifs("music"); // declare file variable
    int n = numberofchars(ifs);
    cout << "Music has " << n
         << " characters" << endl;
         
    ifs.close();     
    MUSICELMT *music; 
    music = new MUSICELMT[n]; //Declare new MUSICELMT
   
    ifs.open("music"); // open file
    readsong(ifs,music,n); //run the readsong program to see what everything is
    
    
    PlayMusic (music, 80); //Play the music at a tempo of 80 beats per minute
   
}
