/*Write a program to Find LCM of two numbers.*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int num1,num2;
    cin >> num1 >> num2;
    int n1 = num1;
    int n2 = num2;

    while(num1%num2!=0){
        int rem= num1%num2;
        num1 = num2;
        num2 = rem;
    }
    int GCD = num2;
    int LCM = (n1*n2)/GCD;

    cout << LCM;
    return 0;
}