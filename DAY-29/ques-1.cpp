/*Write a program to Create menu-driven 
calculator.*/
#include <iostream>
using namespace std;

class Calculator
{
private:
    float num1, num2;

public:
    void input()
    {
        cout << "Enter First Number: ";
        cin >> num1;

        cout << "Enter Second Number: ";
        cin >> num2;
    }

    void add()
    {
        cout << "Result = " << num1 + num2 << endl;
    }

    void subtract()
    {
        cout << "Result = " << num1 - num2 << endl;
    }

    void multiply()
    {
        cout << "Result = " << num1 * num2 << endl;
    }

    void divide()
    {
        if (num2 != 0)
            cout << "Result = " << num1 / num2 << endl;
        else
            cout << "Division by zero is not possible!" << endl;
    }
};

int main()
{
    Calculator calc;
    int choice;

    do
    {
        cout << "\n===== MENU-DRIVEN CALCULATOR =====\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            calc.input();
            calc.add();
            break;

        case 2:
            calc.input();
            calc.subtract();
            break;

        case 3:
            calc.input();
            calc.multiply();
            break;

        case 4:
            calc.input();
            calc.divide();
            break;

        case 5:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}