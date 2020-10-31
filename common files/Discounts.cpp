#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;

    int arr[n];

    int s=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        s+=arr[i];
    }

    sort(arr, arr+n, greater<int>());

    int m;
    cin>>m;
    int cop[m];

    //int mini=s;
    for(int i=0; i<m; i++){
        cin>>cop[i];
        cout<<s-arr[cop[i]-1]<<endl;
    }
    //cout<<mini;

    return 0;
}
