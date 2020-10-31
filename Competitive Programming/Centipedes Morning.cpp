#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 998244353
#define loop(i, n) for(ll i=1; i<=n; i++)

typedef pair<ll, ll> pll;

ll power(ll base, ll pow){
    ll ans = 1;

    while(1){
        if(pow % 2 == 1 && pow != 1){
            ans *= base;
        }

        pow /= 2;

        if(pow == 0)
            break;
        base = base*base;
    }

    return ans*base;
}




void solve(ll test){
    ll a, b;
    cin >> a >> b;

    ll ans = max(b*2+40, 119+(a-40)*2);

    cout << ans << endl;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll test = 1;
    // cin >> test;

    loop(i, test){
        solve(i);
    }

    return 0;
}