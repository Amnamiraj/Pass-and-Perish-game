#include "movement.h"

movement::movement()
{

}

movement::~movement()
{

}
void movement :: moves(int& I, int& N, char W[4], char X[4], char Y[4], char Z[4])
{
    system("CLS");
    for (int i = 0; i < I; i++)
    {
        if (Z[i] == 'I')
        {
            Z[i] = '_';
            W[i] = 'I';
        }
        else if (Z[i] == '_')
            I = I + 1;
    }
    for (int j = 0; j < N; j++)
    {
        if (Y[j] == 'N')
        {
            Y[j] = '_';
            X[j] = 'N';
        }
        else if (Y[j] == '_')
            N = N + 1;
    }
}