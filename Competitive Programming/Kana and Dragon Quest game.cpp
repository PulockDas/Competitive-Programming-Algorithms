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

    here:
    while (t--)
    {
        ll x, n, m;
        cin >> x >> n >> m;
        m *= 10;

        if(x <= m){
            cout << "YES\n";
            continue;
        }

        while(n--){
            x /= 2;
            x += 10;

            if(x <= m){
                cout << "YES\n";
                goto here;
            }
        }

        cout << "NO\n";
    }

    return 0;
}