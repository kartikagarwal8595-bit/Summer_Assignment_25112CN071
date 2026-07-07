/*Write a program to Create mini library 
system.*/
#include <iostream>
#include <string>
using namespace std;

class Library
{
private:
    int bookId[100];
    string bookName[100];
    bool issued[100];
    int total = 0;

public:
    void addBook()
    {
        cout << "Enter Book ID: ";
        cin >> bookId[total];
        cin.ignore();

        cout << "Enter Book Name: ";
        getline(cin, bookName[total]);

        issued[total] = false;
        total++;

        cout << "Book Added Successfully!\n";
    }

    void displayBooks()
    {
        if (total == 0)
        {
            cout << "No Books Available!\n";
            return;
        }

        cout << "\n----- Library Books -----\n";
        for (int i = 0; i < total; i++)
        {
            cout << "Book ID : " << bookId[i] << endl;
            cout << "Book Name : " << bookName[i] << endl;

            if (issued[i])
                cout << "Status : Issued\n";
            else
                cout << "Status : Available\n";

            cout << "-------------------------\n";
        }
    }

    void issueBook()
    {
        int id;
        cout << "Enter Book ID to Issue: ";
        cin >> id;

        for (int i = 0; i < total; i++)
        {
            if (bookId[i] == id)
            {
                if (issued[i])
                    cout << "Book Already Issued!\n";
                else
                {
                    issued[i] = true;
                    cout << "Book Issued Successfully!\n";
                }
                return;
            }
        }

        cout << "Book Not Found!\n";
    }

    void returnBook()
    {
        int id;
        cout << "Enter Book ID to Return: ";
        cin >> id;

        for (int i = 0; i < total; i++)
        {
            if (bookId[i] == id)
            {
                if (!issued[i])
                    cout << "Book is Already Available!\n";
                else
                {
                    issued[i] = false;
                    cout << "Book Returned Successfully!\n";
                }
                return;
            }
        }

        cout << "Book Not Found!\n";
    }
};

int main()
{
    Library lib;
    int choice;

    do
    {
        cout << "\n===== MINI LIBRARY SYSTEM =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Issue Book\n";
        cout << "4. Return Book\n";
        cout << "5. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            lib.addBook();
            break;

        case 2:
            lib.displayBooks();
            break;

        case 3:
            lib.issueBook();
            break;

        case 4:
            lib.returnBook();
            break;

        case 5:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}