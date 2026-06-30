/*Write a program to Find maximum frequency 
element.*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, arr[50];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxelement;
    int maxfreq=0;
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(arr[j]==arr[i]){
                cnt++;
            }
        }
        if(cnt>maxfreq){
            maxfreq=cnt;
            maxelement=arr[i];
        }
    }
    cout << "Element of max frequency is " << maxelement;
    return 0;
}