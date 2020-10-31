#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int arr[n], l=n;

    while(l--)
        cin>>arr[l];

    sort(arr, arr+n);

    l=n/2;
    if(n%2!=0)
        cout<<arr[l];
    else
        cout<<arr[l-1];

    return 0;
}
