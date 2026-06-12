/*Write a program to Find x^n without pow().*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int x, n;
    cin >> x >> n;

    int result = 1;

    for (int i = 1; i <= n; i++) {
        result = result * x;
    }

    cout << result;

    return 0;
}
