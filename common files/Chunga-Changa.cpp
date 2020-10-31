#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
    ll x, y, z;
    cin >> x >> y >> z;
    ll ans = (x+y) / z;

    cout << ans << ' ';

    ll a1, a2, r1, r2;

    a1 = x / z, r1 = x % z;
    a2 = y / z, r2 = y % z;

    ll rest = ans - a1 - a2;

    if(rest == 0){
        cout << 0;
        return 0;
    }

    rest *= z;

    ans = rest - r1;
    ll ans2 = rest - r2;

    if (ans < ans2)
        cout << ans;
    else
        cout << ans2;

    return 0;
}
