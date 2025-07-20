#ifndef INPUT_R_H
#define INPUT_R_H
#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>
#include "input.h"

using  namespace std;

#pragma once

class input_r : virtual public input
{
public:
    input_r();
    void user_input_r();
    ~input_r();
};

#endif