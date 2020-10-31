#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
        cin>>arr[i];
    if(arr[0]!=arr[n-1]){
        cout<<n-1;
        return 0;
    }

    int a, b;
    for(int i=1; i<n-1; i++){
        if(arr[i]!=arr[0]){
            a=n-i-1;
            break;
        }
    }

    for(int i=n-1; i>-1; i--){
        if(arr[i]!=arr[0]){
            b=i;
            break;
        }
    }

    cout<<max(a, b);
    return 0;
}
