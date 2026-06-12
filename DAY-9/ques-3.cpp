/*Write a program to Print repeated character 
pattern. 
A 
BB 
CCC 
DDDD 
EEEEE */
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    for(char i='A';i<='E';i++){
        for(char j='A';j<=i;j++){
            cout << i;
        }
        cout << "\n";
    }
    return 0;
}