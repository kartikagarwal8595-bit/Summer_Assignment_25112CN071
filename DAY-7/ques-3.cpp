/*Write a program to Recursive sum of digits.*/
#include<bits/stdc++.h>
using namespace std;

int sumofdigits(int m){
    if(m==0){
        return 0;
    }
    return (m%10) + sumofdigits(m/10);
}
int main(){
    int n;
    cin >> n;
    sumofdigits(n);
    cout << sumofdigits(n);
    return 0;
}