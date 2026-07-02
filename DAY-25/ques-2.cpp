/*Write a program to Find common characters 
in strings.*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    int freq1[256] = {0}, freq2[256] = {0};

    cout << "Enter first string: ";
    getline(cin, str1);

    cout << "Enter second string: ";
    getline(cin, str2);

    // Store characters of first string
    for (int i = 0; i < str1.length(); i++) {
        freq1[(int)str1[i]] = 1;
    }

    // Store characters of second string
    for (int i = 0; i < str2.length(); i++) {
        freq2[(int)str2[i]] = 1;
    }

    cout << "Common characters are: ";
    bool found = false;

    for (int i = 0; i < 256; i++) {
        if (freq1[i] && freq2[i]) {
            cout << (char)i << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "None";
    }

    cout << endl;

    return 0;
}