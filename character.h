#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>
using  namespace std;

#pragma once

class character {
protected:
    int I = 0, N = 0;
    char L_IA[4] = { '_','_','_' };
    char L_NA[4] = { '_','_','_' };
    char R_NA[4] = { 'N','N','N' };
    char R_IA[4] = { 'I','I','I' };
    const char SS[6][10] = { "  .^."," / * \\"," | * |","<|___|>"," /\\ /\\"," |   |" };

public:
    character();
    virtual void reset() ;
    virtual void display() ;
    virtual void game() = 0;
    ~character();
};

#endif