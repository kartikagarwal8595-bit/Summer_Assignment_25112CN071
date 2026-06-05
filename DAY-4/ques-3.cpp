/*Write a program to Check Armstrong number.*/
#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){
    int n,count=0,sum=0;
    cin >> n;
    int n1=n;
    while(n>0){
        n=n/10;
        count++;
    }
    n=n1;

    while(n>0){
        int r=n%10;
        sum= sum + round(pow(r,count));
        n=n/10;
    }
    if(n1==sum){
        cout << "The no. is armstrong";
    }
    else{
        cout << "The no. is not armstrong";
    }
    return 0;
}