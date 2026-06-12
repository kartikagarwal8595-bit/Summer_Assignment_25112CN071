/*Write a program to Write function for 
palindrome.*/
#include<bits/stdc++.h>
using namespace std;

int palindrome(int n){
    int n1=n;
    int rev=0;
    while(n>0){
        int r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(n1==rev){
        return true;
    }
    return false;
}
int main(){
    int n;
    cin >> n;

    cout << palindrome(n);
    return 0;
}