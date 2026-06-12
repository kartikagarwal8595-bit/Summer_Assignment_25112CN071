/*Write a program to Write function to find sum 
of two numbers.*/
#include<bits/stdc++.h>
using namespace std;

int sum(int x,int y){
    return x + y;
}
int main(){
    int a,b;
    cin >> a >> b;

    cout << "Sum of two numbers=" << sum(a,b);
    return 0;
}