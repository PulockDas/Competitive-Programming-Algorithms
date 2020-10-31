#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];

    sort(arr, arr+3);

    int k=arr[0]+arr[1];

    if(arr[2]>=k)
        cout<<arr[2]-k+1;
    else
        cout<<0;

    return 0;
}
