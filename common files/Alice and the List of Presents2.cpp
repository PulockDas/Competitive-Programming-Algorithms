#include <bits/stdc++.h>
using namespace std;
#define mx 1000000007
#define ll long long

ll poww(ll a, ll n){
    if(!n) return 1;

    ll aa = (a*a) % mx;

    if(n%2 == 1)
        return (a * (poww(aa, n/2))) % mx;

     return (poww(aa, n/2)) % mx;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;

    cout << poww((poww(2, m) - 1), n) << endl;

    return 0;
}

