/*Write a program to Print prime numbers in a 
range*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,count=0;
    cin >> n;

    if(n==0&&n==1){
        cout << "The no. is not prime";
    }

    for(int i=2;i<=n;i++){
        count=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
            }
            if(count==2){
                cout << i << "\n";
        }
    }
}