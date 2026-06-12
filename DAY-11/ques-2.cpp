/*Write a program to Write function to find 
maximum.*/
#include<bits/stdc++.h>
using namespace std;

int max(int x,int y){
    if(x>y){
        return x;
    }
    return y;
}
int main(){
    int a,b;
    cin >> a >> b;

    cout << "The max no.=" << max(a,b);
    return 0;
}