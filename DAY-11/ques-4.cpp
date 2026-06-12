/*Write a program to Write function to find 
factorial.*/
#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n;
    cin >> n;

    cout << "factorial of given no.=" << fact(n);
    return 0;
}