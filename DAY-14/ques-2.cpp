/*Write a program to Frequency of an element.*/
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
        cout << "The frequency of " << num << " is " << hash[num] << endl;    
    }
    
    return 0;
}