/*Write a program to Print reverse pyramid. 
********* 
 ******* 
  ***** 
   *** 
    * */
#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i=5;i>=1;i--){
        for(int j=5;j>i;j--){
            cout << " ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}