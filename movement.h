#ifndef MOVEMENT_H
#define MOVEMENT_H
#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>
#include "input_l.h"
#include "input_r.h"
using  namespace std;

#pragma once

class movement : public input_l, public input_r {

    
protected:
    void moves(int& I, int& N, char W[4], char X[4], char Y[4], char Z[4]);

public:
    movement();
    ~movement();
};

#endif