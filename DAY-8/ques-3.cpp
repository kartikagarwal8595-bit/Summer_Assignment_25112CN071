/*Write a program to Print character triangle. 
A 
AB 
ABC 
ABCD 
ABCDE*/
#include<bits/stdc++.h>
using namespace std;

int main(){

    for(char i='A';i<='E';i++){
        for(char j='A';j<=i;j++){
            cout << j;
        }
        cout << "\n";
    }
    return 0;
}
