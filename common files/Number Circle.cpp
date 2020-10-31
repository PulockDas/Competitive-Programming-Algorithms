#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
    ll n;
    cin >> n;
    ll arr[n];

    for(ll i=0; i<n; i++)
        cin >> arr[i];

    sort(arr, arr+n);

    if(arr[n-2]+arr[n-3] <= arr[n-1]){
        cout << "NO";
        return 0;
    }

    ll x = arr[n-1];
    arr[n-1] = arr[n-2];
    arr[n-2] = x;

    cout << "YES" << endl;
    for(ll i=0; i<n; i++)
        cout << arr[i] << ' ';

    return 0;
}
