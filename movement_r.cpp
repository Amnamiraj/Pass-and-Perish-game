#include "movement_r.h"

movement_r::movement_r()
{

}

movement_r::~movement_r()
{

}
void movement_r::moves_r(int& I, int& N, char R_IA[4], char R_NA[4], char L_NA[4], char L_IA[4]) 
{
    moves(I, N, R_IA, R_NA, L_NA, L_IA);
    display_R();
}