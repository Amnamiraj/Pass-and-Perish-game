#include "gamelogic.h"

gamelogic::gamelogic()
{

}

gamelogic::~gamelogic()
{

}
void gamelogic::r(char A[], int n, char c) 
{
    for (int i = 0; i < n; i++) 
    {
        A[i] = c;
    }
}
void gamelogic::reset() 
    {
        I = 0, N = 0;
        r(L_IA, 3, '_');
        r(L_NA, 3, '_');
        r(R_IA, 3, 'I');
        r(R_NA, 3, 'N');
    }
void gamelogic::login()
{
    do 
    {   while(true)
        {
            cout << "1. Login" << endl;
            cout << "2. Register" << endl;
            cout << "Enter your choice: ";
            choice = getch();
            cout << choice <<endl;
            if(choice=='1'||choice=='2')
            { 
                break;
            }
            else
                cout<<"Invalid choice"<<endl;
                
        }

        cout << "Enter username: ";
        cin >> name;
        cout << "Enter password: ";
        cin >> password;
        m.set_n(name);
        m.set_p(password);
        if (choice == '1') 
        {
            if (m.validate_user()) 
            {
                cout << "Login successful!" << endl;
                break;
            }
            else
            {
                cout << "Invalid credentials!" << endl;
            }
        }
        else if (choice == '2') 
        {
            t = m.save_user();
            if (t == 0)
                break;
        }
    }
    while(true);
}
void gamelogic::game() {

        int c = 0;
        s.start_up();
        login();

        i.instruction();
        i.rules();

        display_R();

        while (true) 
        {
            Counter(L_IA, L_NA, R_NA, R_IA);

            user_input_l();
            moves_l(I, N, L_IA, L_NA, R_NA, R_IA);
            c++;

            state = check(L_IA, L_NA, R_NA, R_IA);
            if (state == 2 || state == 1)
            {

                m.add_score(c, state);
                m.show_score(c, state);
                break;
            }

            user_input_r();
            moves_r(I, N, R_IA, R_NA, L_NA, L_IA);
            c++;

            state = check(L_IA, L_NA, R_NA, R_IA);
            if (state == 2 || state == 1)
            {
                m.add_score(c, state);
                m.show_score(c, state);
                break;
            }
        }
    }