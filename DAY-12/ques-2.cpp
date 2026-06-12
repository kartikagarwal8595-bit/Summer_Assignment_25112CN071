/*Write a program to Write function for 
Armstrong.*/
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

void arm(int n){
    int sum=0,count=0;
    int n1=n;

    while(n1>0){
        n1=n1/10;
        count++;
    }
    n1=n;
    while(n1>0){
        int r=n1%10;
        sum=sum + round(pow(r,count));
        n1=n1/10;
    }
    if(n==sum){
        cout << "armstrong";
    }
    else{
    cout << "not armstrong";
}    
}
int main(){
    int n;
    cin >> n;
    arm(n);

    return 0;
}