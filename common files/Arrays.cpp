#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int na, nb;
    cin>>na >>nb;
    int arr1[na], arr2[nb];

    int k, m;
    cin>>k >>m;

    for(int i=0; i<na; i++)
        cin>>arr1[i];

    for(int i=0; i<nb; i++)
        cin>>arr2[i];

    if(arr1[k-1]<arr2[nb-m])
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
