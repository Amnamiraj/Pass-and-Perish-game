#include "instructions.h"

instructions::instructions()
{

}

instructions::~instructions()
{
        
}

void instructions::instruction()
{
        system("CLS");
        cout << "\n\n\n\n\nPlease help the astraunauts travel to the moon to find the cure for the disease infecting humanity \n";
        Sleep(2000); 
}
void instructions :: rules()
{
        cout << "\n\nGAME RULES : \n\n";
        cout << "* You must transfer all the astronauts to the Moon \n\n";
        cout << "* The spaceship can carry a maximum of 2 astronauts at a time (either infected or uninfected).\n\n";
        cout << "* You cannot move any astronauts if the spaceship is empty.\n\n";
        cout << "* You can only move astronauts from the side of the ship that has enough astronauts to support your request.\n\n";
        cout << "* The game ends when all of the astronauts are on the left side of the ship (you win),\n\n  or there are more infected astronauts than there are uninfected astronauts on one side of the ship (you lose).";
        cout << "\n\n\n PRESS ANY KEY TO CONTINUE.\n";
        getch();
        cin.ignore();
        system("CLS");
}