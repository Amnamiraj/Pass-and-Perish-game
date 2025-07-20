#ifndef GAMELOGIC_H
#define GAMELOGIC_H
#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>
#include "score.h"
#include "score.cpp"
#include "start.h"
#include "start.cpp"
#include "instructions.h"
#include "instructions.cpp"
#include "Counting.h"
#include "Counting.cpp"
#include "input.h"
#include "input.cpp"
#include "input_l.h"
#include "input_l.cpp"
#include "input_r.h"
#include "input_r.cpp"
#include "movement.h"
#include "movement.cpp"
#include "movement_l.cpp"
#include "movement_l.h"
#include "movement_r.cpp"
#include "movement_r.h"
#include "Check.h"
#include "Check.cpp"

using  namespace std;

class gamelogic : public Check {

    string name, password;
    char choice;
    int state = 0;
    bool t = 0;
    start s;
    score m;
    instructions i;

    void r(char A[], int n, char c) ;
    void login();
public:
    gamelogic();
    void reset() ;
    void game() ;
    ~gamelogic();
};

#endif