/*Write a program to Write function for perfect 
number.*/
#include<bits/stdc++.h>
using namespace std;

void perfect(int n){
    int sum=0;
    int n1=n;

    for(int i=1;i<n1;i++){
        if(n1%i==0){
            sum=sum+i;
        }
    }
    if(n==sum){
        cout << "perfect number";
    }
    else{
        cout << "not perfect number";
    }
}
int main(){
    int n;
    cin >> n;

    perfect(n);
    return 0;
}
