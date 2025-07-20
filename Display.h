#ifndef DISPLAY_H
#define DISPLAY_H
#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>
#include "character.h"
#include "character.cpp"
using  namespace std;

#pragma once

class Display :public character {
private:
    void display();

    void s_mb(int p);

    void s_mf(int p);
public:
    Display();
    void display_L();
    void display_R();
    virtual void game() = 0;
    ~Display();
};

#endif