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
        ll x, y;

        cin >> x >> y;

        ll a, b;
        cin >> a >> b;

        ll ans;
        if(a*2 > b){
            ans = b*min(x, y);
            x = max(x, y)-min(x, y);
            ans = ans+x*a;
        }

        else{
            ans = (x+y)*a;
        }

        cout << ans<<endl;
    }

    return 0;
}