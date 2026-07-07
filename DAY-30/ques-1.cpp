/*Write a program to Create student record 
system using arrays and strings.*/
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo[100];
    string name[100];
    float marks[100];
    int total = 0;

public:
    void addStudent()
    {
        if (total == 100)
        {
            cout << "Student Record is Full!\n";
            return;
        }

        cout << "Enter Roll Number: ";
        cin >> rollNo[total];
        cin.ignore();

        cout << "Enter Student Name: ";
        getline(cin, name[total]);

        cout << "Enter Marks: ";
        cin >> marks[total];

        total++;

        cout << "Student Record Added Successfully!\n";
    }

    void displayStudents()
    {
        if (total == 0)
        {
            cout << "No Student Records Found!\n";
            return;
        }

        cout << "\n----- Student Records -----\n";
        for (int i = 0; i < total; i++)
        {
            cout << "Roll Number : " << rollNo[i] << endl;
            cout << "Name        : " << name[i] << endl;
            cout << "Marks       : " << marks[i] << endl;
            cout << "---------------------------\n";
        }
    }

    void searchStudent()
    {
        int roll;
        cout << "Enter Roll Number to Search: ";
        cin >> roll;

        for (int i = 0; i < total; i++)
        {
            if (rollNo[i] == roll)
            {
                cout << "\nStudent Found!\n";
                cout << "Roll Number : " << rollNo[i] << endl;
                cout << "Name        : " << name[i] << endl;
                cout << "Marks       : " << marks[i] << endl;
                return;
            }
        }

        cout << "Student Not Found!\n";
    }

    void updateMarks()
    {
        int roll;
        cout << "Enter Roll Number: ";
        cin >> roll;

        for (int i = 0; i < total; i++)
        {
            if (rollNo[i] == roll)
            {
                cout << "Enter New Marks: ";
                cin >> marks[i];
                cout << "Marks Updated Successfully!\n";
                return;
            }
        }

        cout << "Student Not Found!\n";
    }
};

int main()
{
    Student s;
    int choice;

    do
    {
        cout << "\n===== Student Record System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Marks\n";
        cout << "5. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            s.addStudent();
            break;

        case 2:
            s.displayStudents();
            break;

        case 3:
            s.searchStudent();
            break;

        case 4:
            s.updateMarks();
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