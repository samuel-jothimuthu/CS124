#include <iostream>
#include <string.h>
#include <stdio.h>
#include <sstream>
#include <algorithm>

/** \page "MorseCode"
    A struct holding letters of the alphabet along with numbers
    and special characters. Each symbol is associated with a morse code
    sequence,a max of 7 '.'s or '-'s total can be held in the sequence.
*/
struct MorseCode
{
    enum {N=7};
    char symbol;
    char code[N];
};

/** \page "TNODE"
    A tree node to be used in creation of the binary tree. Used in
    conjunction with the open() function, when creating the tree, a tree
    node is made with '*' as a default symbol and no child nodes. The
    symbol is overwritten if the sequence ends at that tree node and child
    nodes are created if the sequence forces a node to be made there.
*/
struct TNODE 
{
    char symbol;
    TNODE* left;
    TNODE* right;
    TNODE () {
        symbol = '*';
        left = 0;
        right = 0;
    }
};

/** \page "Class: Telegraph"
    A class holding a table of size 40 consisting of symbols and their
    morse code equivalents. A root node is created automatically for
    creation of the binary tree. A DestroyTree() function exists for
    the closing process of the binary tree. The class has open() and close()
    functions for maintaining the morse code binary tree. The class also
    holds encode() and decode() functions for english to morse translations
    and vice versa.
*/
class Telegraph 
{
    enum {N= 40};
    private:
        static MorseCode table[N];
        static TNODE* root;
        static void DestroyTree(TNODE *node);
    public:
        static void open();
        static void close() { DestroyTree(root); }
        void encode(char text[],char morse[]);
        void decode(char morse[],char text[]);
    
};
