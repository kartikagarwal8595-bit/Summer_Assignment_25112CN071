/*Write a program to Create mini employee 
management system.*/
#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int empId[100];
    string empName[100];
    string department[100];
    float salary[100];
    int total = 0;

public:
    void addEmployee()
    {
        if (total == 100)
        {
            cout << "Employee Record is Full!\n";
            return;
        }

        cout << "Enter Employee ID: ";
        cin >> empId[total];
        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, empName[total]);

        cout << "Enter Department: ";
        getline(cin, department[total]);

        cout << "Enter Salary: ";
        cin >> salary[total];

        total++;

        cout << "Employee Added Successfully!\n";
    }

    void displayEmployees()
    {
        if (total == 0)
        {
            cout << "No Employee Records Found!\n";
            return;
        }

        cout << "\n----- Employee Records -----\n";
        for (int i = 0; i < total; i++)
        {
            cout << "Employee ID : " << empId[i] << endl;
            cout << "Name        : " << empName[i] << endl;
            cout << "Department  : " << department[i] << endl;
            cout << "Salary      : " << salary[i] << endl;
            cout << "----------------------------\n";
        }
    }

    void searchEmployee()
    {
        int id;
        cout << "Enter Employee ID to Search: ";
        cin >> id;

        for (int i = 0; i < total; i++)
        {
            if (empId[i] == id)
            {
                cout << "\nEmployee Found!\n";
                cout << "Employee ID : " << empId[i] << endl;
                cout << "Name        : " << empName[i] << endl;
                cout << "Department  : " << department[i] << endl;
                cout << "Salary      : " << salary[i] << endl;
                return;
            }
        }

        cout << "Employee Not Found!\n";
    }

    void updateSalary()
    {
        int id;
        cout << "Enter Employee ID: ";
        cin >> id;

        for (int i = 0; i < total; i++)
        {
            if (empId[i] == id)
            {
                cout << "Enter New Salary: ";
                cin >> salary[i];
                cout << "Salary Updated Successfully!\n";
                return;
            }
        }

        cout << "Employee Not Found!\n";
    }
};

int main()
{
    Employee emp;
    int choice;

    do
    {
        cout << "\n===== MINI EMPLOYEE MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Update Salary\n";
        cout << "5. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            emp.addEmployee();
            break;

        case 2:
            emp.displayEmployees();
            break;

        case 3:
            emp.searchEmployee();
            break;

        case 4:
            emp.updateSalary();
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