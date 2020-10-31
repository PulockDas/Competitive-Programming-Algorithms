#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,s=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
            s++;
    }
    if(s>0)
        cout<<"HARD";
    else
        cout<<"Easy";
    return 0;
}
