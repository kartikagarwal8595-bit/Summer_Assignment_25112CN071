/*Write a program to Create student record 
management system.*/
#include <iostream>
#include <string>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float marks;
};

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    Student s[n];

    // Input student records
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Student " << i + 1 << endl;

        cout << "Enter Roll Number: ";
        cin >> s[i].rollNo;

        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, s[i].name);

        cout << "Enter Marks: ";
        cin >> s[i].marks;
    }

    // Display student records
    cout << "\n===== Student Records =====\n";

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Roll Number: " << s[i].rollNo << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Marks: " << s[i].marks << endl;
    }

    return 0;
}