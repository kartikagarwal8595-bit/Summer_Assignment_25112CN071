/*Write a program to Print number pyramid. 
    1 
   121 
  12321 
 1234321 
123454321 */
#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i=1;i<=5;i++){
        for(int j=5;j>i;j--){
            cout << " ";
        }
        //Incresing Numbers
        for(int j=1;j<=i;j++){
            cout << j;
        }
        //Decresing Numbers
        for(int j=i-1;j>=1;j--){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}