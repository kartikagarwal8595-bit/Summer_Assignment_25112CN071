/*Write a program to Find sum of digits of a 
number.*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0;
    cin >> n;

    while(n>0){
        int r=n%10;
        sum=sum+r;
        n=n/10;
    }
    cout << sum;
    return 0;
}