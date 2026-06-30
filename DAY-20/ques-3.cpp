/*Write a program to Find row-wise sum.*/
#include <iostream>
using namespace std;

int main() {
    int a[10][10];
    int rows, cols;

    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    // Input matrix elements
    cout << "Enter elements of matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> a[i][j];
        }
    }

    // Calculate and display row-wise sum
    for (int i = 0; i < rows; i++) {
        int sum = 0;

        for (int j = 0; j < cols; j++) {
            sum += a[i][j];
        }

        cout << "Sum of row " << i + 1 << " = " << sum << endl;
    }

    return 0;
}