/*Write a program to Union of arrays.*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    for (int i = 0; i < n1; i++) {
        cout << arr1[i] << " ";
    }

    for (int i = 0; i < n2; i++) {
        bool found = false;

        for (int j = 0; j < n1; j++) {
            if (arr2[i] == arr1[j]) {
                found = true;
                break;
            }
        }

        if (!found) {
            cout << arr2[i] << " ";
        }
    }

    return 0;
}