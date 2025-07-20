#ifndef CHECK_H
#define CHECK_H
#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>
#include "movement_l.h"
#include "movement_r.h"
using  namespace std;

#pragma once

class Check : public movement_l, public movement_r {

public:
    Check();
    void game_over();
    void lost();
    void won();
    int check(char L_IA[4], char L_NA[4], char R_NA[4], char R_IA[4]) ;
    ~Check();
};

#endif