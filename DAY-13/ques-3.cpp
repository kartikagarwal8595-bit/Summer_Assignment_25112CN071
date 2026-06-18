/*Write a program to Find largest and smallest 
element.*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,arr[50];
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int largest=arr[0];
    int smallest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>=largest){
            largest=arr[i];
        }
        if(arr[i]<=smallest){
            smallest=arr[i];
        }
    }
    cout << "The largest element is " << largest << "\n";
    cout << "The smallest element is " << smallest;
    return 0;
}