#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int arr[4];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
    sort(arr, arr+4);
    if(arr[1]+arr[2]>arr[3] || arr[0]+arr[1]>arr[2])
        cout<<"TRIANGLE";
    else {
        if(arr[1]+arr[2]==arr[3] || arr[0]+arr[1]==arr[2])
            cout<<"SEGMENT";
        else
            cout<<"IMPOSSIBLE";
    }

    return 0;
}
