/*Write a program to Recursive Fibonacci.*/
#include<bits/stdc++.h>
using namespace std;

int fib(int m){
    if(m<=1){
        return m;
    }
    int last=fib(m-1);
    int slast=fib(m-2);
    return last + slast;
}
int main(){
    int n;
    cin >> n;
    fib(n);
    cout << fib(n);
    return 0;
}