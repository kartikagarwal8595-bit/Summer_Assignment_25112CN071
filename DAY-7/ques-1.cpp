/*Write a program to Recursive factorial.*/
#include<bits/stdc++.h>
using namespace std;

int fact(int m){
    if(m==1){
    return 1;
}
return m*fact(m-1);
}
int main(){
    int n;
    cin >> n;
    fact(n);
    cout << fact(n);
    return 0;
}