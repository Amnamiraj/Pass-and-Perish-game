#ifndef MOVEMENT_L_H
#define MOVEMENT_L_H
#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>
#include "movement.h"
using  namespace std;

#pragma once

class movement_l :virtual public movement {
public:
    movement_l();
    void moves_l(int& I, int& N, char L_IA[4], char L_NA[4], char R_NA[4], char R_IA[4]) ;
    ~movement_l();
};

#endif