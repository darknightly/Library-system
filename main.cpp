#include <iostream>
#include <string>
#include <vector>
using namespace std;

void adminpanel()
{   
    int choice ; 
    cout << endl
         << "library Manu:" << endl
         << "1) add_book" << endl
         << "2) search_books_by_prefix" << endl
         << "3) print_who_borrowed_book_by_name" << endl
         << "4) print_library_by_id" << endl
         << "5) print_library_by_name" << endl
         << "6) add_user" << endl
         << "7) user_borrow_book" << endl
         << "8) user_return_book" << endl
         << "9) print_users" << endl
         << "10) return to main manu" << endl
         << "11) Exit" << endl
         << endl
         << "Enter your choice [1-10]: |";
    cin >> choice ; 
    switch (choice)
    {
        case 1 :

    } 

}

int main()
{
    cout << "===================" << "Welcome to the library system" << endl
         << "===================" << endl
         << "please Enter the user name";
    string user;
    vector<string> users{"motaz"};
    cin >> user;
    if (user == "admin" || user == "Admin")
    {
        adminpanel() ; 

    }
    else
    {
        for (int i = 0; i < users.size(); i++)
        {
            if (user == users[i])
            {
            }
        }
    }

    return 0;
}