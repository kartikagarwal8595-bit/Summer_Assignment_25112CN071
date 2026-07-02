/*Write a program to Create number guessing 
game.*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Seed for random number generation

    int secretNumber = rand() % 100 + 1; // Random number between 1 and 100
    int guess, attempts = 0;

    cout << "=== Number Guessing Game ===" << endl;
    cout << "I have selected a number between 1 and 100." << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        }
        else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        }
        else {
            cout << "Congratulations! You guessed the number in "
                 << attempts << " attempts." << endl;
        }

    } while (guess != secretNumber);

    return 0;
}