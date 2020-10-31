#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, p, k;
    cin>>n>>p>>k;

    int i=p-k, j=p+k;
    if(i>1)
        cout<<"<<"<<" ";

    for(; i<p; i++){
        if(i>0)
            cout<<i<<" ";
    }

    cout<<"("<<p<<")"<<" ";

    for(i=p+1; i<=j && i<=n; i++)
        cout<<i<<" ";

    if(j<n)
        cout<<">>";

    return 0;
}
