#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int l=n;
    n/=2;

    int arr[n];

    for(int i=0; i<n; i++)
        cin>>arr[i];

    sort(arr, arr+n);

    int wh=0,bl=0;

    for(int i=n-1,cell=l; i>=0; i--,cell-=2)
        wh+=abs(cell-arr[i]);

    for(int i=n-1,cell=l-1; i>=0; i--,cell-=2)
        bl+=abs(cell-arr[i]);

    if(wh<bl)
        cout<<wh;

    else
        cout<<bl;

    return 0;
}
