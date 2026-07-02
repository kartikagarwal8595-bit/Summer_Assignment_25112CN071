/*Write a program to Check string rotation.*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    // Strings of different lengths cannot be rotations
    if (str1.length() != str2.length()) {
        cout << "The strings are not rotations of each other." << endl;
        return 0;
    }

    // Concatenate first string with itself
    string temp = str1 + str1;

    // Check if second string exists in the concatenated string
    if (temp.find(str2) != string::npos)
        cout << "The strings are rotations of each other." << endl;
    else
        cout << "The strings are not rotations of each other." << endl;

    return 0;
}