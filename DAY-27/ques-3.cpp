/*Write a program to Create salary management 
system.*/
#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int empId;
    string name;
    float basicSalary;
    float hra;
    float da;
    float grossSalary;
};

int main() {
    Employee emp;

    cout << "Enter Employee ID: ";
    cin >> emp.empId;

    cin.ignore();

    cout << "Enter Employee Name: ";
    getline(cin, emp.name);

    cout << "Enter Basic Salary: ";
    cin >> emp.basicSalary;

    // Calculate HRA and DA
    emp.hra = emp.basicSalary * 0.20;   // 20% HRA
    emp.da = emp.basicSalary * 0.10;    // 10% DA

    // Calculate Gross Salary
    emp.grossSalary = emp.basicSalary + emp.hra + emp.da;

    cout << "\n===== Salary Details =====" << endl;
    cout << "Employee ID: " << emp.empId << endl;
    cout << "Employee Name: " << emp.name << endl;
    cout << "Basic Salary: Rs. " << emp.basicSalary << endl;
    cout << "HRA (20%): Rs. " << emp.hra << endl;
    cout << "DA (10%): Rs. " << emp.da << endl;
    cout << "Gross Salary: Rs. " << emp.grossSalary << endl;

    return 0;
}