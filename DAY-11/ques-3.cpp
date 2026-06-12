/*Write a program to Write function to check 
prime.*/
#include<bits/stdc++.h>
using namespace std;

int prime(int n){
    if(n<=1){
        return false;
    }
    else{
        int cnt=0;
        for(int i=2;i<=n/2;i++){
            if(n%i==0)
                cnt++;
        }
        if(cnt==0){
            return true;
        }
        return false;
    }
}
int main(){
    int n;
    cin >> n;

    cout << prime(n);
    return 0;
}