/*Write a program to Find maximum occurring 
character.*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int freq[256] = {0};

    cout << "Enter a string: ";
    getline(cin, str);

    // Count frequency of each character
    for (int i = 0; i < str.length(); i++) {
        freq[(int)str[i]]++;
    }

    int maxFreq = 0;
    char maxChar;

    // Find character with maximum frequency
    for (int i = 0; i < 256; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = (char)i;
        }
    }

    cout << "Maximum occurring character: " << maxChar << endl;
    cout << "Frequency: " << maxFreq << endl;

    return 0;
}