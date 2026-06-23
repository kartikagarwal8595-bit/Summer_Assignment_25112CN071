/*Write a program to Reverse array.*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, arr[50];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int start = 0, end = n - 1;
    while (start < end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    cout << "The reverse array is ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}