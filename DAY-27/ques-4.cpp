/*Write a program to Create marksheet 
generation system.*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int rollNo;
    float marks1, marks2, marks3, marks4, marks5;
    float total, percentage;
    char grade;

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter marks of 5 subjects:\n";
    cout << "Subject 1: ";
    cin >> marks1;
    cout << "Subject 2: ";
    cin >> marks2;
    cout << "Subject 3: ";
    cin >> marks3;
    cout << "Subject 4: ";
    cin >> marks4;
    cout << "Subject 5: ";
    cin >> marks5;

    total = marks1 + marks2 + marks3 + marks4 + marks5;
    percentage = total / 5;

    // Grade Calculation
    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 80)
        grade = 'B';
    else if (percentage >= 70)
        grade = 'C';
    else if (percentage >= 60)
        grade = 'D';
    else
        grade = 'F';

    cout << "\n========== MARKSHEET ==========\n";
    cout << "Student Name : " << name << endl;
    cout << "Roll Number  : " << rollNo << endl;
    cout << "Total Marks  : " << total << " / 500" << endl;
    cout << "Percentage   : " << percentage << "%" << endl;
    cout << "Grade        : " << grade << endl;

    if (grade == 'F')
        cout << "Result       : Fail" << endl;
    else
        cout << "Result       : Pass" << endl;

    return 0;
}