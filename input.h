#ifndef INPUT_H
#define INPUT_H
#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>
#include "Counting.h"
using  namespace std;

#pragma once

class input :public Counting {
    
protected:
    void user_input() ;
public:
    input();
    ~input();
};

#endif