/*Write a program to Find pair with given sum.*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {8, 7, 2, 5, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    bool found = false;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "Pair found: (" << arr[i] << ", " << arr[j] << ")" << endl;
                found = true;
            }
        }
    }

    if (!found) {
        cout << "No pair found" << endl;
    }

    return 0;
}