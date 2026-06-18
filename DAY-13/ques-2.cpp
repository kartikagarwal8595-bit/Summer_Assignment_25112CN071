/*Write a program to Find sum and average of 
array.*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,arr[50],sum=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        sum=sum+ arr[i];
    }
    int avg=sum/n;
    cout << "The sum of array is " << sum << "\n";
    cout << "The average of array is " << avg;
    return 0;
}