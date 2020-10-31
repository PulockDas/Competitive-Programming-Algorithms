#include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long n, m, k;
    cin>>n>>m>>k;

    unsigned long long ans;

    long long arr[n];
    for(long long i=0; i<n; i++)
        cin>>arr[i];

    sort(arr, arr+n);

    long long pos=m/(k+1);
    //cout<<pos;
    ans=arr[n-1]*pos*k+arr[n-1]*(m%(k+1))+arr[n-2]*pos;

    cout<<ans;

    return 0;
}
