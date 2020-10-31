#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int arr[n],arr2[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
        arr2[i]=arr[i];
    }

    sort(arr2, arr2+n);

    int s=0, e=0;
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            s=i;
            break;
            }
    }

    for(int i=s+1; i<n-1; i++){
        if(arr[i]<arr[i+1])
            e=i;
            break;
    }

    sort(arr+s, arr+e+1);

    int i;
    for(i=0; i<n; i++){
        if(arr[i]!=arr2[i])
            break;
    }

    if(i==n)
        cout<<"yes"<<endl<<arr[e]<<' '<<arr[s];
    else
        cout<<"no";

    return 0;
}
