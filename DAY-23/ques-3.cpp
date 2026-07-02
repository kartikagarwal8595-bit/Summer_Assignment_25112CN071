/*Write a program to Check anagram strings.*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    // If lengths are different, they cannot be anagrams
    if (str1.length() != str2.length()) {
        cout << "The strings are not anagrams." << endl;
        return 0;
    }

    int freq[256] = {0};

    // Count characters of first string
    for (int i = 0; i < str1.length(); i++) {
        freq[(int)str1[i]]++;
    }

    // Subtract characters of second string
    for (int i = 0; i < str2.length(); i++) {
        freq[(int)str2[i]]--;
    }

    // Check if all frequencies are zero
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            cout << "The strings are not anagrams." << endl;
            return 0;
        }
    }

    cout << "The strings are anagrams." << endl;

    return 0;
}