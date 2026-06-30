/*Write a program to Find missing number in 
array.*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, arr[]={0,1,2,4,5};
    cin >> n;

    int xorr1=0,xorr2=0;
    for(int i=0;i<n;i++){
        xorr2=xorr2 ^ arr[i];
        xorr1=xorr1 ^ (i+1);
    }
    cout << "The missing element is " << (xorr1 ^ xorr2);
    return 0;
}