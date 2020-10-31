#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
    ll n;
    cin >> n;

    ll arr[n];
    ll s = 0;

    for(ll i=0; i<n; i++){
        cin >> arr[i];
        s += arr[i]%2;
    }

    if(s%2 == 1){
        cout << "NO";
        return 0;
    }

    sort(arr, arr+n);
    s = 0;

    for(ll i=n-2; i>-1; i--){
        s += arr[i];
        if(s >= arr[n-1]){
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";

    return 0;
}
