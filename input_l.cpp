#include "input_l.h"

input_l::input_l()
{

}

input_l::~input_l()
{

}
void input_l::user_input_l()
{
    do 
    {
        user_input();
        if ((Count_RI < I) || (Count_RN < N))
        cout << "\nNot enough Infected austraunats on the left side" << endl;
    } 
    while ((Count_RI < I) || (Count_RN < N));
}