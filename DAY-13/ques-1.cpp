/*Write a program to Input and display array.*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,arr[50];
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Array element are= ";
    for(int i=0;i<n;i++){
    cout << arr[i] << " ";
    }
    return 0;
}