#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int arr[n][2];

    for(int i=0; i<n; i++)
        cin>>arr[i][0]>>arr[i][1];

    int k;
    cin>>k;

    int m=n;
    for(int i=0; i<n; i++){
        if(k>arr[i][1])
            m--;
        else
            break;
    }

    cout<<m;

    return 0;
}
