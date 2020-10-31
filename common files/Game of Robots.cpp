#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
    int n;
    ll k;

    cin >> n >> k;

    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];

    ll x = ((-1+sqrt(1+8*k))/2), z;
    z = x * (x + 1) / 2;

    if(k == z){
        ll y = z - x * (x - 1) / 2;
        cout<<arr[y-1];
    }
    else
        cout << arr[k-z-1];

    return 0;
}
