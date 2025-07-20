#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>
#include "gamelogic.h"
#include "gamelogic.cpp"
using namespace std;


int main() {

    character* c;
    gamelogic g;
    c = &g;
    char Play_Again;
    do {
        c->reset();
        system("CLS");
        c->game();
        cout << "\nDo you want to play again? (Press Y to continue)\n";
        cin >> Play_Again;
    } while (Play_Again == 'y' || Play_Again == 'Y');
    return 0;
}
