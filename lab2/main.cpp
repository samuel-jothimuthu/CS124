/**
This is the main function of the program.
This function uses functions described in other files 
to build, display,insert, and destroy the list.
\param[in] Nothing This program takes no inputs
\param[out] 0 The program exits succesfully

\image latex ../fig1.eps "Linked List" width=4in
This is what happens when the list is displayed, built or loaded.
*/
#include "lab.h"
int main()
{
    NODE* head = loadlist("cities");
    displaylist(head);
    
    
    
    if(head)
    {
        cout << "\nInsert in order Sacramento & Newark" << endl;
        insertinorder(head, "Sacramento");
        insertinorder(head, "Newark");
        displaylist(head);
        
        cout << "\nDestroying and rebuilding list" << endl; 
        destroylist(head);
        builddirectly(head, "cities");
        
        cout << "\nInsert Sacramento & Newark" << endl;
        insert(head, "Davis");
        insert(head, "Newark");
        
        displaylist(head);
        
        
    }
    return 0;
}
