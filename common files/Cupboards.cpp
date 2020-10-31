#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n,lclosed=0,rclosed=0;
    cin>>n;
    int arr[n][2];

    for(int i=0; i<n; i++){
        cin>>arr[i][0]>>arr[i][1];
        if(arr[i][0]==0)
            lclosed++;
        if(arr[i][1]==0)
            rclosed++;
    }

    int m=n-lclosed;

    if(lclosed>m)
        lclosed=m;

    m=n-rclosed;

    if(rclosed>m)
        rclosed=m;
    cout<<lclosed+rclosed;

    return 0;
}
