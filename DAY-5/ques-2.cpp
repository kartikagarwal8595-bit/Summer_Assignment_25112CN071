/*Write a program to Check strong number.*/
#include<bits/stdc++.h>
using namespace std;

int fact(int m){
    int f=1;

    for(int i=1;i<=m;i++){
        f=f*i;
    }
    return f;
}

int main(){
    int n,n1,sum=0;
    cin >> n;
    n1=n;
    while(n>0){
        int r=n%10;
        sum=sum + fact(r);
        n=n/10;
    }
    if(n1==sum){
        cout << "The no.is strong";
    }
    else{
        cout << "The no.is not strong";
    }
}