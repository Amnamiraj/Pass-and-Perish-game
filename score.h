#ifndef SCORE_H
#define SCORE_H
#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>
#include "user.h"
#include "user.cpp"
using  namespace std;

#pragma once

class score :public user {

public:
    score();
    void add_score(int moves, int state);
    void show_score(int moves, int state);
    ~score();
    
};

#endif