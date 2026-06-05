/*Write a program to Generate Fibonacci series.*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int fib1=0;
    int fib2=1;

    for(int i=1;i<=n;i++){

        if(i==1){
            cout << fib1 << endl;
        }
        if(i==2){
            cout << fib2 << endl;
        }
        else{
            int newterm = fib1+fib2;
            fib1=fib2;
            fib2=newterm;

            cout << newterm << endl;
        }
    }

    return 0;
}
