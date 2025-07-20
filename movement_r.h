#ifndef MOVEMENT_R_H
#define MOVEMENT_R_H
#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>
#include "movement.h"
using  namespace std;

#pragma once

class movement_r : virtual public movement {
public:
    movement_r();
    void moves_r(int& I, int& N, char R_IA[4], char R_NA[4], char L_NA[4], char L_IA[4]) ;
    ~movement_r();
    
};

#endif