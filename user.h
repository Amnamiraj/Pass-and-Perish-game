#ifndef USER_H
#define USER_H
#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>
using  namespace std;

#pragma once

class user {

protected:
    string name, password;
    static int i;
public:
    user();
    void set_n(string n);
    void set_p(string p);

    bool save_user();
    bool validate_user() ;
    ~user();
};
int user::i = 1;

#endif