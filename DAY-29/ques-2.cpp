/*Write a program to Create menu-driven array 
operations system.*/
#include <iostream>
using namespace std;

class ArrayOperations
{
private:
    int arr[100], n;

public:
    void inputArray()
    {
        cout << "Enter Number of Elements: ";
        cin >> n;

        cout << "Enter Array Elements:\n";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }

    void displayArray()
    {
        cout << "Array Elements: ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void findSum()
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        cout << "Sum of Array Elements = " << sum << endl;
    }

    void findMaximum()
    {
        int max = arr[0];

        for (int i = 1; i < n; i++)
        {
            if (arr[i] > max)
                max = arr[i];
        }

        cout << "Maximum Element = " << max << endl;
    }

    void findMinimum()
    {
        int min = arr[0];

        for (int i = 1; i < n; i++)
        {
            if (arr[i] < min)
                min = arr[i];
        }

        cout << "Minimum Element = " << min << endl;
    }
};

int main()
{
    ArrayOperations obj;
    int choice;

    obj.inputArray();

    do
    {
        cout << "\n===== MENU-DRIVEN ARRAY OPERATIONS =====\n";
        cout << "1. Display Array\n";
        cout << "2. Find Sum\n";
        cout << "3. Find Maximum\n";
        cout << "4. Find Minimum\n";
        cout << "5. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            obj.displayArray();
            break;

        case 2:
            obj.findSum();
            break;

        case 3:
            obj.findMaximum();
            break;

        case 4:
            obj.findMinimum();
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