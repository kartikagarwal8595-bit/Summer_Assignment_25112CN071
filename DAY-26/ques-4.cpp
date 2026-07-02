/*Write a program to Create quiz application.*/
#include <iostream>
using namespace std;

int main() {
    int score = 0;
    char answer;

    cout << "===== QUIZ APPLICATION =====\n\n";

    // Question 1
    cout << "1. What is the capital of India?\n";
    cout << "a) Mumbai\nb) New Delhi\nc) Kolkata\nd) Chennai\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 'b' || answer == 'B')
        score++;

    // Question 2
    cout << "\n2. Which language is primarily used for C++ programming?\n";
    cout << "a) Python\nb) Java\nc) C++\nd) HTML\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 'c' || answer == 'C')
        score++;

    // Question 3
    cout << "\n3. How many days are there in a week?\n";
    cout << "a) 5\nb) 6\nc) 7\nd) 8\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 'c' || answer == 'C')
        score++;

    // Display result
    cout << "\n===== RESULT =====\n";
    cout << "Your score is: " << score << " out of 3" << endl;

    if (score == 3)
        cout << "Excellent!" << endl;
    else if (score == 2)
        cout << "Good Job!" << endl;
    else
        cout << "Keep Practicing!" << endl;

    return 0;
}