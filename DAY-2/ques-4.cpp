/*Write a program to Check whether a number is 
palindrome.*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,n1,rev=0;
    cin >> n;
    n1=n;

    while(n>0){
        int r= n%10;
        rev =(rev*10) + r;
        n = n/10;
    }
    n=n1;
    if( rev==n){
        cout << "The given number is palendrome";
    }
    else {
        cout << "The given number is not palendrome";
    }
    return 0;
}