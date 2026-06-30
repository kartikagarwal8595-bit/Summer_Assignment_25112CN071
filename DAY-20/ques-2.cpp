/*Write a program to Check symmetric matrix.*/
#include <iostream>
using namespace std;

int main() {
    int a[10][10];
    int n;
    bool symmetric = true;

    cout << "Enter the order of square matrix: ";
    cin >> n;

    // Input matrix elements
    cout << "Enter elements of matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    // Check symmetry
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                symmetric = false;
                break;
            }
        }
        if (!symmetric)
            break;
    }

    // Display result
    if (symmetric)
        cout << "The matrix is symmetric.";
    else
        cout << "The matrix is not symmetric.";

    return 0;
}