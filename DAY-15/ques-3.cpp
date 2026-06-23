/*Write a program to Rotate array right.*/
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
    int temp=arr[n-1];
    for(int i=n-2;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=temp;

    cout << "The array after rotation is ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}