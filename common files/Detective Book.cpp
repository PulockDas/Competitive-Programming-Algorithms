#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int arr[n], c;

    for(int i=0; i<n; i++)
        cin>>arr[i];

    c=arr[0];
    int ans=0;
    for(int i=1; i<=n; i++){
        if(i==c)
            ans++;
        if(arr[i]>c)
            c=arr[i];
    }

    cout<<ans;

    return 0;
}
