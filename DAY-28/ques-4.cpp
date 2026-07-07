/*Write a program to Create contact 
management system.*/
#include <iostream>
#include <string>
using namespace std;

class Contact
{
private:
    string name[100];
    string phone[100];
    int total = 0;

public:
    void addContact()
    {
        if (total == 100)
        {
            cout << "Contact List is Full!\n";
            return;
        }

        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name[total]);

        cout << "Enter Phone Number: ";
        getline(cin, phone[total]);

        total++;

        cout << "Contact Added Successfully!\n";
    }

    void displayContacts()
    {
        if (total == 0)
        {
            cout << "No Contacts Found!\n";
            return;
        }

        cout << "\n----- Contact List -----\n";
        for (int i = 0; i < total; i++)
        {
            cout << "Contact " << i + 1 << endl;
            cout << "Name : " << name[i] << endl;
            cout << "Phone: " << phone[i] << endl;
            cout << "------------------------\n";
        }
    }

    void searchContact()
    {
        string searchName;
        cin.ignore();

        cout << "Enter Name to Search: ";
        getline(cin, searchName);

        for (int i = 0; i < total; i++)
        {
            if (name[i] == searchName)
            {
                cout << "\nContact Found!\n";
                cout << "Name : " << name[i] << endl;
                cout << "Phone: " << phone[i] << endl;
                return;
            }
        }

        cout << "Contact Not Found!\n";
    }

    void deleteContact()
    {
        string deleteName;
        cin.ignore();

        cout << "Enter Name to Delete: ";
        getline(cin, deleteName);

        for (int i = 0; i < total; i++)
        {
            if (name[i] == deleteName)
            {
                for (int j = i; j < total - 1; j++)
                {
                    name[j] = name[j + 1];
                    phone[j] = phone[j + 1];
                }

                total--;
                cout << "Contact Deleted Successfully!\n";
                return;
            }
        }

        cout << "Contact Not Found!\n";
    }
};

int main()
{
    Contact c;
    int choice;

    do
    {
        cout << "\n===== Contact Management System =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Delete Contact\n";
        cout << "5. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            c.addContact();
            break;

        case 2:
            c.displayContacts();
            break;

        case 3:
            c.searchContact();
            break;

        case 4:
            c.deleteContact();
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