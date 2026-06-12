/*Write a program to Print character pyramid.*/
#include<bits/stdc++.h>
using namespace std;

int main(){

    for(int i = 1; i <= 5; i++){
         for (int j = 5; j>i; j--){
            cout << " ";
        }
        
        char c = 'A';
        for(int j = 1; j <=i; j++){
            cout << c;
            c++;
        }
        c = 'A';
        for(int k=i-1;k>=1;k--){
            cout << char(c + k-1);

        }
        cout << endl;
    }
    return 0;
}