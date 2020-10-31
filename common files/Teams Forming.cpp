#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
        cin>>arr[i];

    sort(arr, arr+n);

    int s=0;
    for(int i=0; i<n; i+=2)
        s+=arr[i+1]-arr[i];

    cout<<s;

    return 0;
}
