/*Write a program to Linear search.*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,arr[50],target;
    cin >> n >> target;

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            cout <<  i;
            return 0;
        }
    }
    cout << "-1";
}