/*Write a program to Find duplicates in array.*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,arr[50];
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    int q;
    cin >> q;
    while(q--){
        int num;
        cin >> num;
        if(hash[num]==1){
            cout << "Not Duplicate";
        }
        else{
            cout << "Duplicate";
        }
    }
    return 0;
}