#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<string> books;
vector<int> quantitiy;
vector<int> bookid;
bool panel = false;
int bindex = 0;
bool exit()
{
    char ch;
    cout << "ARE U SURE U WANT TO CLOSE THE APP ??" << endl
         << "ALL OF THE DATA WILL BE LOST YES OR NO [Y/N]" << endl;
    cin.ignore();
    cin >> ch;
    ch = toupper(ch);
    while (ch != 'Y' && ch != 'N')
    {
        cout << endl
             << "incorrect input yes or no only [Y/N] ";
        cin >> ch;
    }

    if (toupper(ch) == 'Y')
    {
        return 1;
    }
    else if (toupper(ch) == 'N')
    {
        return 0;
    }

    return 0;
}

string toupperforreal(string value)
{
    for (int i = 0; i < value.size(); i++)
    {
        if (islower(value[i]))
        {
            value[i] = toupper(value[i]);
        }
    }
    return value;
}
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
    bookid.push_back(100 + bindex);
    bindex++;
}
void printbyid()
{
    for (int i = 0; i < bindex; i++)
    {
        cout << endl
             << "id = " << bookid[i] << " name = " << books[i] << " total amount of the book is "
             << quantitiy[i] << endl;
    }
}
int main()
{
    cout << "      ===================" << endl
         << "Welcome to the library system" << endl
         << "      ===================" << endl;
    cout << "please Enter the your username : ";
    string user;
    cin >> user;
    user = toupperforreal(user);
    while (toupperforreal(user) != "ADMIN")
    {
        cout << endl
             << "the username u entered is wrong for now try again : ";
        cin >> user;
    }
    bool manu = true;
    while (manu)
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
             << "10) return_to_main_manu" << endl
             << "11) Exit" << endl
             << endl
             << "Enter your choice [1-10]: |  ";
        cin >> choice;
        if (choice == 1)
        {
            addbook();
        }
        else if (choice == 2)
        {
        }
        else if (choice == 3)
        {
        }
        else if (choice == 4)
        {
            printbyid();
        }
        else if (choice == 5)
        {
        }
        else if (choice == 6)
        {
        }
        else if (choice == 7)
        {
        }
        else if (choice == 8)
        {
        }
        else if (choice == 9)
        {
        }
        else if (choice == 10)
        {
        }
        else if (choice == 11)
        {
            int areYouSure = exit();

            if (areYouSure)
            {
                return 0;
            }
            else if (areYouSure)
            {
                manu = true;
            }
        }
    }

    return 0;
}