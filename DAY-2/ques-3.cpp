/*Write a program to Find product of digits.*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,product=1;
    cin >> n;

    if(n==0){
        cout << "The product of digits is 0";
    }
    else{
        while(n>0){
        int r= n%10;
        product = product * r;
        n = n/10;
    }
    }
    cout << product;
    return 0;
}