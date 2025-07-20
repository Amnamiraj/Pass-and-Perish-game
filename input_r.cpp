#include "input_r.h"

input_r::input_r()
{

}

input_r::~input_r()
{

}
void input_r :: user_input_r()
{
    do 
    {
        user_input();
        if ((Count_LI < I || Count_LN < N))
            cout << "\nNot enough characters on the right side" << endl;
    } while ((Count_LI < I || Count_LN < N));
}