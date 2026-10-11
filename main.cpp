#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
vector<string> books;
vector<int> quantitiy;
vector<int> bookid;
bool panel = false;
int bindex = 0;
vector<string> users ; 
vector<int> usersid ; 
vector<vector<string>> usersbooks ; 

int useri = 0 ; 
void adduser()
{
    string user ; 
    cin >> user ; 
    users.push_back(user) ;
    usersbooks.push_back(users);
    usersid.push_back(useri+100);
    useri++ ;
}
void printwhobroow()
{

}
void userbroow()
{
    string user ; 
    string book ;
    int booknum ; 
    int usernum ; 
    bool bookfound = false; 
    bool userfound = false; 
    cout << "\n" <<"Enter user name and book name :" ;
    cin >> user >> book ; 
    for (int i = 0 ; i < users.size() ; i++)
    {
        if (user == users[i])
        {   
            usernum = i ;
            userfound = true ; 
            cout << "\n" << "user exiest..." ;
            break;
        }
    }
    if (userfound = false)
    {
        cout << "\n" << "sorry cah the user does not exitest going back to menu" ; 
        return ; 
    }
    for (int i = 0 ; i < books.size() ; i++)
    {
        if (book == books[i])
        {
            booknum = i ; 
            bookfound = true ; 
            cout << "\n" << "book found..." ;
            break; 
        }
    }
    if (bookfound = false)
    {
        cout << "\n" << "sorry bro we could not find the book u are look for going back to menu" ;
        return ; 
    }
    if (quantitiy[booknum] - 1 > -1)
    {
        quantitiy[booknum] -= 1 ;
        usersbooks[usernum].push_back(book) ;
        cout << "\n" << "have the book now i think " ; 
    }
    else if (quantitiy[booknum] - 1 <= -1)
    {
        cout << "\n" << "this book has no copys left please add more of it then try again later" ; 
    }
    // if (quantitiy[booknum] == 0)
    // {
    //     books.erase
    // }
}
void printwhobrow()
{
    cout << "\n" << "printing all users who browed books with books names...... ";
    for (int i = 0 ; i < usersbooks.size() ; i++)
    {
        cout << "\n" << "The user  " << users[i] << " and the books are "; 
        for (int j = 1 ; j < usersbooks[i].size() ; j++)
        {
            cout << "  " << usersbooks[i][j] ; 
        }
    }
}
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
void printbyname()
{
    
    for (int i = 0 ; i < books.size() ; i++)
    {
        for (int j = 0 ; j < books[i].size(); j++)
        {
           
        
            
        }
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
        cout << endl << endl 
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
            printwhobrow();
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
            adduser();
        }
        else if (choice == 7)
        {
            userbroow();
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