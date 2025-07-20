#include "score.h"

score::score()
{

}

score::~score()
{

}
void score::add_score(int moves, int state)
{
        system("CLS");
        ofstream user_file(name, ios::app);
        string condition;
        if (state == 2)
            condition = "WON";
        else if (state == 1)
            condition = "LOST";

        user_file << " You " << condition << " the game with " << moves << " moves" << endl;
}
void score::show_score(int moves, int state)
{
    ifstream file(name);
    string line;
        while (getline(file, line)) 
        {
            cout << line << endl;
        }

}