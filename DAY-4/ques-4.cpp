/*Write a program to Print Armstrong numbers 
in a range.*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        int count=0,sum=0;
        int i1=i;

        while(i1>0){
            i1=i1/10;
            count++;
        }
        i1=i;

        while(i1>0){
            int r= i1%10;
            sum = sum + round(pow(r,count));
            i1 = i1/10;
        }

        if(i==sum){
            cout << i << endl;
        }
    }
    return 0;
}