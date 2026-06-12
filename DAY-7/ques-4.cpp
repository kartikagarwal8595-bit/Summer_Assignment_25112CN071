/*Write a program to Recursive reverse number.*/
#include<bits/stdc++.h>
using namespace std;

int reverse(int m, int rev){
    if(m==0){
        return rev;
    }
    
    return reverse(m/10,rev*10+m%10);
}
int main(){
    int n;
    cin >> n;
    cout << reverse(n,0);

    return 0;
}