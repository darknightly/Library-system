#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<string> books;
vector<int> quantitiy;
vector<int> bookid;
bool panel = false ;
int booki = 0;
void adminpanel();
void addbook()
{
    string ip;
    cout << endl
         << "Enter your book info: name , quantitiy: ";
    cin >> ip;
    books.push_back(ip);
    int tity;
    cin >> tity;
    quantitiy.push_back(tity);
    bookid[booki] = 100 + booki;
    booki++;
}
void adminpanel()
{
    int choice;
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
         << "Enter your choice [1-10]: |  ";
    cin >> choice;

}
void userpanel()
{
}
string toupperforreal (string value )
{   
    for (int i =0 ; i < value.size() ; i++)
    {
        if (islower(value[i]))
        {
            toupper(value[i]) ; 
        }
    }
    return value ; 
}
void startmenu()
{
    cout << "please Enter the your username : ";
    string user;
    vector<string> users{"motaz"};
    cin >> user;
    if (toupperforreal(user) == "ADMIN" )
    {
        adminpanel();
    }
    else
    {
        bool usercheck = false;
        for (int i = 0; i < users.size(); i++)
        {
            if (user == users[i])
            {
                usercheck = true;
                break;
            }
        }
        if (usercheck)
        {
            userpanel;
        }
        else
        {
            cout << endl
                 << "there is no user with this name" << endl
                 << endl;
            startmenu();
        }
    }
}

int main()
{
    cout << "      ===================" << endl
         << "Welcome to the library system" << endl
         << "      ===================" << endl;
    startmenu();

    return 0;
}