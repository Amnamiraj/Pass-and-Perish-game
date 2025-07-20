#include "movement_l.h"

movement_l::movement_l()
{

}

movement_l::~movement_l()
{

}
void movement_l::moves_l(int& I, int& N, char L_IA[4], char L_NA[4], char R_NA[4], char R_IA[4]) 
{
    moves(I, N, L_IA, L_NA, R_NA, R_IA);
    display_L();
}