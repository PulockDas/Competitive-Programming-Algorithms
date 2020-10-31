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
        ll n, k;
        cin >> n >> k;

        ll a[n], b[n];
        for(ll i=0; i<n; i++) cin >> a[i];
        for(ll i=0; i<n; i++) cin >> b[i];

        sort(a, a+n);
        sort(b, b+n, greater<ll>());

        ll ans = 0;

        for(ll i=0, j=0, m=0; i<n; i++){
            if(a[i]<b[j] && m<k){
                ans += b[j];
                j++;
                m++;
            }

            else
                ans += a[i];
        }

        cout << ans <<endl;
    }

    return 0;
}