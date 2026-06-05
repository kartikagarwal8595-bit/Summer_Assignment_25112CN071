/*Write a program to Find nth Fibonacci term.*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int fib1=0;
    int fib2=1;

        if(n==1){
            cout << fib1 << endl;
        }
        if(n==2){
            cout << fib2 << endl;
        }
        else{ 
            for(int i=2;i<=n;i++){
            int newterm=fib1+fib2;
            fib1=fib2;
            fib2=newterm;
        }
        cout << fib2;
    }
    return 0;
    }
    
