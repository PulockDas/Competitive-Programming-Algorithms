#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 998244353

typedef pair<ll, ll> pll;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        ll arr[n];
        for(ll i=0; i<n; i++) cin >> arr[i];

        sort(arr, arr+n);

        ll ans = INT_MAX;

        for(ll i=1; i<n; i++){
            ll num = abs(arr[i-1]-arr[i]);
            if(num < ans){
                ans = num;
            }
        }

        cout << ans << endl;
    }

    return 0;
}