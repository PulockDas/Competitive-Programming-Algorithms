#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main ()
{
    ll n, m;
    cin >> n >>m;

    ll kmin, kmax;
    ll c = n / m;

    ll r= n % m;

    kmin = ((m - r)*(c-1) + r * (c+1)) * c /2;
    kmax = (n - m + 1) * (n - m) / 2;

    cout << kmin << ' ' << kmax;

    return 0;
}
