/*Write a program to Write function for 
Fibonacci.*/
#include<bits/stdc++.h>
using namespace std;

void fibonacci(int n){
    int f1=0;
    int f2=1;

    for(int i=1;i<=n;i++){
        if(i==1){
            cout << f1 << " ";
        }
        if(i==2){
            cout << f2 << " ";
        }
        else{
            int newterm=f1+f2;
            cout << newterm << " ";
            f1=f2;
            f2=newterm;
        }
    }
}
int main(){
    int n;
    cin >> n;

    cout << "The fibonacci series is=";
    fibonacci(n);
    return 0;
}