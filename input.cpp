#include "input.h"

input::input()
{

}

input::~input()
{

}
void input::user_input() 
{
    do 
    {
        char A, B;
        cout << "\n";
            while (true) 
            {
                cout << "\nEnter the number of infected astronauts you want to move: ";
                A = getch();
                I = (A - '0');
                cout << A;
                if (I == 1 || I == 2 || I == 0)
                    break;
                else if (I == 3)
                    cout << "\nThe spaceship can carry maximum of 2 astronauts";
                else
                    cout << "\nEnter a valid number of infected astronauts";
            }
            while (true) 
            {
                cout << "\nEnter the number of normal astronauts you want to move: ";
                B = getch();
                N = (B - '0');
                cout << B;
                if (N == 1 || N == 2 || N == 0)
                    break;
                else if (N == 3)
                    cout << "\nThe spaceship can carry maximum of 2 astronauts";
                else
                    cout << "\nEnter a valid number of normal astronauts";
            }
            if ((N + I) > 2)
                cout << "\nSpaceship can carry maximum of 2 astronauts";
            if (N == 0 && I == 0)
                cout << "\nSpaceship cannot move when empty";
    } 
    while (N > 2 || I > 2 || (N == 0 && I == 0) || (N + I) > 2);
}