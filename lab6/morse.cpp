#include "lab.h"

MorseCode Telegraph::table[N] = {
  {'A', ".-"},     {'B', "-..."},    {'C', "-.-."},   {'D', "-.."},
  {'E', "."},      {'F', "..-."},    {'G', "--."},    {'H', "...."},
  {'I', ".."},     {'J', ".---"},    {'K', "-.-"},    {'L', ".-.."},
  {'M', "--"},     {'N', "-."},      {'O', "---"},    {'P', ".--."},
  {'Q', "--.-"},   {'R', ".-."},     {'S', "..."},    {'T', "-"},
  {'U', "..-"},    {'V', "...-"},    {'W', ".--"},    {'X', "-..-"},
  {'Y', "-.--"},   {'Z', "--.."},
  {'0', "-----"},  {'1', ".----"},   {'2', "..---"},  {'3', "...--"},
  {'4', "....-"},  {'5', "....."},   {'6', "-...."},  {'7', "--..."},
  {'8', "---.."},  {'9', "----."},
  {'.', ".-.-.-"}, {',', "--..--"},  {'?', "..--.."},
  {'\0', ""} // END
};

TNODE* Telegraph::root = 0; //set root to null

/** \page "Telegraph::open()"
    A table holding english symbols and their morse code equivalent is
    read. For each symbol, the morse code sequence is read and a node pointer
    points through the nodes depending on the sequence, creating nodes if
    they don't exist. If a '.' is read, it moves into the left child node
    of the root. If a '-' is read, it moves into the right child node of 
    the root. This keeps going until the end of the sequence. For example, 
    '.--' would cause the node pointer to point to the left child node of
    the root, then the right child node of the node it was pointing to, and
    then the left child node again of the node it was pointing to. If the nodes
    didn't exist, they would be created. At the end of the sequence, the symbol
    associated with it is stored in the node and the node pointer goes back
    to root, restarting the process until the table is finished.

    \brief Creates and opens a binary tree holding english symbols
    and their morse code equivalents

*/
void Telegraph::open()
{
    char* dd;
    Telegraph::root = new TNODE;
    TNODE* node; TNODE* nextnode;
    for(int i = 0; i < N; i++) {
        node = root;
        for( dd = table[i].code; *dd; dd++) {
                
            if(*dd == '.') 
            {
                nextnode = node->left;
                if(not nextnode) 
                {
                nextnode = new TNODE;
                node-> left = nextnode;
                }
            }
            else if(*dd == '-')
             {
                nextnode = node->right;
                if(not nextnode) 
                {
                nextnode = new TNODE;
                node-> right = nextnode;
                }
            }
            else std::cerr << "Unknown morse code" << std::endl;
            node = nextnode;
         } //not dash or dot, must be null so assign symbol
         node->symbol = table[i].symbol;
    }
}

/** \page "Telegraph::DestroyTree/Telegraph::close()"
    The root node is passed in and begins the deletion process. The close
    function calls DestroyTree, a recursive function that will traverse
    the tree until it hits the end of both sides. Once that happens,
    the nodes are deleted until it reaches root. Root is then deleted,
    triggering the base case where a node does not exist, ending the
    function
    
    \brief Traverses the binary tree, deleting each node until finally
    deleting the root node itself
    \param[in] *node The root node of the binary tree
    \return void
*/
void Telegraph::DestroyTree(TNODE *node)
{
    if(node) {
        DestroyTree(node->left);
        DestroyTree(node->right);
        delete node;
    }
}
