/*Write a program to Remove duplicate 
characters.*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, result = "";
    int freq[256] = {0};

    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        if (freq[(int)str[i]] == 0) {
            result += str[i];
            freq[(int)str[i]]++;
        }
    }

    cout << "String after removing duplicate characters: " 
         << result << endl;

    return 0;
}