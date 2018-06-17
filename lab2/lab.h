#include <fstream>
#include <iostream>
#include <string>
using namespace std;


enum STATUS {FAILED, OK};
/**
 \brief City Structure
 
 This structure is is used to create each node of the linked list of cities.

*/
struct NODE {
    std::string city;
    NODE *next;
};
/**
    \brief Insert inserts a new node at the beginning of the list 
    \param[in,out] head The head of the linked list
    \param[in] city The data in the node being inserted
    \return A STATUS indicating if Insert was successful of not
*/
STATUS insert(NODE* &head, std::string city);
STATUS insertinorder (NODE* &head, std::string city);
STATUS builddirectly(NODE* &head, string cities);


void destroylist(NODE* head);
void displaylist(NODE* head);

NODE* loadlist(std::string filename);
