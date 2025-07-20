#ifndef COUNTING_H
#define COUNTING_H
#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>
#include "Display.h"
#include "Display.cpp"
using  namespace std;

#pragma once

class Counting : public Display {
private:
    int count(char C, char Ar[4]);
protected:
    int Count_LI = 0, Count_LN = 0, Count_RN = 0, Count_RI = 0;
public:
    Counting();
    void Counter(char L_IA[4], char L_NA[4], char R_NA[4], char R_IA[4]) ;
    ~Counting();
};

#endif