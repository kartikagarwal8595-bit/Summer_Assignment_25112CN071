/*Write a program to Convert decimal to binary.*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    if (n == 0) {
        cout << 0;
        return 0;
    }

    int binary = 0, place = 1;

    while (n > 0) {
        int rem = n % 2;
        binary = binary + rem * place;
        place = place * 10;
        n = n / 2;
    }

    cout << binary;

    return 0;
}
