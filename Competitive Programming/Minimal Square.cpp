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

        ll big = max(x, y);
        ll small = min(x, y);

        small *= 2;

        if(small > big) cout << small*small<<endl;
        else cout << big*big<<endl;
    }

    return 0;
}