#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    int a[3];
    for(int i=0; i<3; i++)
        a[i]=0;
    cin>>n;
    n=n*3;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    for(int i=0; i<3; i++)
        for(int j=i; j<n; j+=3)
            a[i]+=arr[j];

    if(a[0]==0 && a[1]==0 && a[2]==0)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
