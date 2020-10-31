#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
    ll n, d, e;
    cin >> n >> d >> e;

    ll ans = n;
    for(int i=0; i*5*e <= n; i++){
        ans = min(ans, (n-i*5*e) % d);
    }

    cout << ans;

    return 0;
}
