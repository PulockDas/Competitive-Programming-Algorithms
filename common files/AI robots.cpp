#include<bits/stdc++.h>
using namespace std;
int s=0;

void check(int arr1[],int arr2[],int k,int a1,int b1,int a2,int b2)
{
    if((arr2[0]>=a1 && arr2[0]<=b1) &&
       (arr1[0]>=a2 && arr1[0]<=b2) &&
       (abs(arr1[2]-arr2[2])<=k))
    {
        s++;
    }
}

int main ()
{
    int n,k,i,j;
    cin>>n>>k;
    int arr[n][3];
    for(i=0;i<n;i++)
        for(j=0;j<3;j++)
            cin>>arr[i][j];
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        a[i]=arr[i][0]-arr[i][1];
        b[i]=arr[i][0]+arr[i][1];
    }

    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            check(arr[i],arr[j],k,a[i],b[i],a[j],b[j]);

    cout<<s;

    return 0;
}
