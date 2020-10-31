#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
    ll n, k;
    cin >> n >> k;

    ll ans = n / k;
    ll r = n - ans * k;

    if(r == 0)
        cout << ans;
    else
        cout << ans + 1;

    return 0;
}
