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

    while (t--)
    {
        ll n, k;

        cin >> n >> k;

        ll arr[n];
        for(ll i=0; i<n; i++) cin >> arr[i];

        sort(arr, arr+n);

        ll m= INT32_MAX;
        for(ll i=0; i+k-1<n; i++){
            ll num = arr[i+k-1]-arr[i];

            m = min(m, num);
        }

        cout << m << endl;
    }

    return 0;
}