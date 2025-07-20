#include "start.h"

start::start()
{

}
start::~start()
{

}
void start::equals_to()
{
   char a=205;
      for (int i = 0; i < 65; i++) 
      {
         cout << a;
      }
}

void start::start_up()
{
   cout << "\n\n\n\n";  equals_to();
   cout << "\n\t\t\tStarting Game\n\t\t\tPlease Wait\n";
   equals_to();

   char c=219;
   cout <<"\n\n";
   Sleep(200);
   for(int i=0;i<65;i++)
   {
        cout<<c;
        Sleep(100);
   }
    Sleep(1600);
    cout<<"\r                          LOADING .....                          \r";

   Sleep(1500); equals_to(); cout << endl;
   
   cout << "\t\tWelcome to Pass or Perish Game.\n";
   equals_to(); cout << endl; Sleep(2000);
   
   system("CLS");

}