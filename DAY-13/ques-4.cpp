/*Write a program to Count even and odd 
elements.*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,arr[50],even=0,odd=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        else odd++;
    }
    cout << "The even elements are " << even << "\n";
    cout << "The odd elements are " << odd;
    return 0;
}