/**
This is the header file.
This contains the several function declarations as well as struct definistions.
It also calls the system libraries that we use.
*/
#ifndef _MUSIC_H_
#define _MUSIC_H_

#include <iostream>
#include <fstream>
#include <cstdlib>
enum PLAY {PLAYNOTE,PLAYFRAGMENT,PLAYSTOP};
enum STATUS {FAILED, OK};
struct NOTE {
    char tone;
    int duration;
};

struct FRAGMENT {
    int start;
    int finish;
};

struct MUSICELMT {
    PLAY type;
    union {
        NOTE note;
        FRAGMENT fragment;
    };
};

struct STACK
{
    int size;
    int *buf;
    int sp;
};

void PlayNote (NOTE &note, float tempo);
void PlayMusic (MUSICELMT music[], float tempo);

using namespace std;
int numberofchars(std::ifstream &f);
void readsong(std::ifstream &f, MUSICELMT m[], int n);
void PlayMUsic (MUSICELMT music[], float tempo);
STATUS Create(STACK & stack, int size);
STATUS Push(STACK &stack, int item);
STATUS Pop(STACK &stack, int &item);
STATUS Destroy(STACK &stack);

inline bool IsEmpty(STACK &stack)
{
    return bool(stack.sp == 0);
}

#endif
