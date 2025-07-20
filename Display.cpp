#include "Display.h"

Display::Display()
{
    
}

Display::~Display()
{

}
void Display::display_L() 
{
    cout << "\n\n\n\n\n\n\n\n"; 
    for (int m = 0; m < 64; m++)
    {
        system("CLS");
        for (int r = 0; r < 6; r++) 
        {
            s_mf(m);
            for (int c = 0; c < 10; c++) 
            {
                cout << SS[r][c];
            }
            cout << endl;
        }
        Sleep(35);
    }
    display();
}
void Display::display_R() 
{
    cout << "\n\n\n\n\n\n\n\n";
    for (int m = 0; m < 64; m++)
    {
        system("CLS");
        for (int r = 0; r < 6; r++) 
        {
            s_mb(m);
            for (int c = 0; c < 10; c++) 
            {
                cout << SS[r][c];
            }
            cout << endl;
        }
        Sleep(35);
    }
    display();
}
void Display::display() 
{
    cout << "\n " << L_IA << " " << L_NA << "\t\t\t\t\t\t\t" << R_NA << " " << R_IA << "\n";  
    Sleep(500);
}
void Display::s_mb(int p)
{
    for (int i = 0; i < p; i++)
    {
        cout << " ";
    }
}
void Display::s_mf(int p)
{
    for (int i = 64; i > p; i--)
    {
        cout << " ";
    }
}