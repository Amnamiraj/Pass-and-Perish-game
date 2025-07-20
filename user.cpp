#include "user.h"

user::user()
{

}

user::~user()
{

}
void user::set_p(string p)
{
    password = p;
}
void user::set_n(string n)
{
    name = n;
}
bool user::save_user() 
{
    ifstream user_file(name);
    if (user_file.is_open()) 
    {
        cout << "Cannot use this username its already in use\n ";
        return 1;
    }
    else
    {
        ofstream user_file(name, ios::app);
        user_file << "NAME " << endl << name << endl;
        user_file << "PASSWORD " << endl << password << endl << endl << " GAME " << i;
         i++;
        return 0;
    }
}

bool user::validate_user() 
{
    ifstream user_file(name);
    if (user_file.is_open()) 
    {
        string stored_name;
        string stored_password;
        while (getline(user_file, stored_password)) 
        {
            if (stored_password == password) 
            {
                ofstream user_file(name, ios::app);
                user_file << endl << " GAME " << i;
                i++;
                return true;
            }
        }
    }
    else 
    {
       cout << "Unable to open file for reading." << endl;
    }
    return false;
}