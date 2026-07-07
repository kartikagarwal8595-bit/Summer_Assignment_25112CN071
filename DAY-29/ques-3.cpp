/*Write a program to Create menu-driven 
string operations system.*/
#include <iostream>
#include <string>
using namespace std;

class StringOperations
{
private:
    string str;

public:
    void inputString()
    {
        cin.ignore();
        cout << "Enter a String: ";
        getline(cin, str);
    }

    void displayString()
    {
        cout << "String: " << str << endl;
    }

    void findLength()
    {
        cout << "Length of String = " << str.length() << endl;
    }

    void reverseString()
    {
        string rev = str;

        for (int i = 0, j = rev.length() - 1; i < j; i++, j--)
        {
            char temp = rev[i];
            rev[i] = rev[j];
            rev[j] = temp;
        }

        cout << "Reversed String = " << rev << endl;
    }

    void convertUppercase()
    {
        string upper = str;

        for (int i = 0; i < upper.length(); i++)
        {
            if (upper[i] >= 'a' && upper[i] <= 'z')
                upper[i] = upper[i] - 32;
        }

        cout << "Uppercase String = " << upper << endl;
    }
};

int main()
{
    StringOperations obj;
    int choice;

    obj.inputString();

    do
    {
        cout << "\n===== MENU-DRIVEN STRING OPERATIONS =====\n";
        cout << "1. Display String\n";
        cout << "2. Find Length\n";
        cout << "3. Reverse String\n";
        cout << "4. Convert to Uppercase\n";
        cout << "5. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            obj.displayString();
            break;

        case 2:
            obj.findLength();
            break;

        case 3:
            obj.reverseString();
            break;

        case 4:
            obj.convertUppercase();
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