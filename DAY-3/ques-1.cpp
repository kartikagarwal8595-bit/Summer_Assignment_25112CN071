/*Write a program to Check whether a number is 
prime.*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,count=0;
    cin >> n;

    if(n==0&&n==1){
        cout << "The no. is not prime";
    }
    if(n==2){
        cout << "The no. is prime";
    }
    else{
        for(int i=1;i<=n;i++){
            if(n%i==0){
            count++;
            }
        }
    }
    if(count==2){
        cout << "The no. is prime";
    }
    else{
        cout << "The no. is not prime";
    }
    return 0;
}