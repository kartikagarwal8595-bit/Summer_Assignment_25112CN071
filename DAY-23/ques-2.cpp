/*Write a program to Find first repeating 
character.*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int freq[256] = {0};

    cout << "Enter a string: ";
    getline(cin, str);

    // Find the first repeating character
    for (int i = 0; i < str.length(); i++) {
        freq[(int)str[i]]++;

        if (freq[(int)str[i]] == 2) {
            cout << "First repeating character: " << str[i] << endl;
            return 0;
        }
    }

    cout << "No repeating character found." << endl;

    return 0;
}