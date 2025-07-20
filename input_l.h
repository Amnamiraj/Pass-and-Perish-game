#ifndef INPUT_L_H
#define INPUT_L_H
#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>
#include "input.h"
using  namespace std;


#pragma once

class input_l : virtual public input
{
public:
    input_l();
    void user_input_l();
    ~input_l();
};

#endif