#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,d,a,j;
    cin>>n>>d;
    int arr1[n],arr2[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    a=arr1[d-1]+arr2[0];
    for(j=0;j<d-1;j++)
    {
        if(arr1[j]+arr2[n-1]<a)
        {
            cout<<j+1;
            break;
        }
        else if(arr1[j]+arr2[n-1]==a)
        {
            continue;
        }
    }
    if(j==d-1)
        cout<<j+1;
    return 0;
}
