/*Write a program to Create employee 
management system.*/
#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int empId;
    string name;
    string department;
    double salary;
};

int main() {
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    Employee emp[n];

    // Input employee details
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Employee " << i + 1 << endl;

        cout << "Enter Employee ID: ";
        cin >> emp[i].empId;

        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, emp[i].name);

        cout << "Enter Department: ";
        getline(cin, emp[i].department);

        cout << "Enter Salary: ";
        cin >> emp[i].salary;
    }

    // Display employee records
    cout << "\n===== Employee Records =====\n";

    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << endl;
        cout << "Employee ID: " << emp[i].empId << endl;
        cout << "Name: " << emp[i].name << endl;
        cout << "Department: " << emp[i].department << endl;
        cout << "Salary: " << emp[i].salary << endl;
    }

    return 0;
}