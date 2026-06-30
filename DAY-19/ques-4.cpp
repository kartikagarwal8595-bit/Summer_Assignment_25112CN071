/*Write a program to Find diagonal sum.*/
#include <iostream>
using namespace std;

int main() {
    int a[10][10];
    int n, sum = 0;

    cout << "Enter the order of square matrix: ";
    cin >> n;

    // Input matrix elements
    cout << "Enter elements of matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    // Calculate sum of main diagonal elements
    for (int i = 0; i < n; i++) {
        sum += a[i][i];
    }

    // Display result
    cout << "Sum of diagonal elements = " << sum;

    return 0;
}