/*Write a program to Find largest prime factor.*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int largest=1;
    for(int i=2;i<=n;i++){
        while(n%i==0){
            largest=i;
            n=n/i;
        }
    }
    cout << "Largest prime factor=" << largest;

    return 0;
}