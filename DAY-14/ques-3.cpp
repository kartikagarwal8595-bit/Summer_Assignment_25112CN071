/*Write a program to Second largest element.*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,arr[50];
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int largest=arr[0];
    int slargest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>=largest){
            largest=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>slargest && arr[i]!=largest){
            slargest=arr[i];
        }
    }
    cout << "The second largest element in array is " << slargest;
    return 0;
}