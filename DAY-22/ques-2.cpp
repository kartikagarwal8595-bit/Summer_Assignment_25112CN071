/*Write a program to Count words in a 
sentence.*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    int count = 0;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    for (int i = 0; i < sentence.length(); i++) {
        // Count a word when a non-space character is found
        // and it is either the first character or follows a space
        if (sentence[i] != ' ' && (i == 0 || sentence[i - 1] == ' ')) {
            count++;
        }
    }

    cout << "Number of words = " << count << endl;

    return 0;
}