#include "Counting.h"

Counting::Counting()
{

}

Counting::~Counting()
{

}
int Counting::count(char C, char Ar[4])
{
    int CT = 0;
    for (int i = 0; i < 3; i++) 
    {
        if (Ar[i] == C)
            CT++;
    }
    return CT;
}
void Counting::Counter(char L_IA[4], char L_NA[4], char R_NA[4], char R_IA[4]) 
{
    Count_LI = count('I', L_IA);
    Count_LN = count('N', L_NA);
    Count_RN = count('N', R_NA);
    Count_RI = count('I', R_IA);
}