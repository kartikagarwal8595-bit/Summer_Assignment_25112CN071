/*Write a program to Check perfect number.*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0;
    cin >> n;

    for(int i=1;i<n;i++){
        if(n%i==0){
            sum=sum + i;
        }
    }
        if(sum==n){
            cout << "The no.is perfect";
        }
        else{
            cout << "The no.is not perfect";
        }
    
    return 0;
}