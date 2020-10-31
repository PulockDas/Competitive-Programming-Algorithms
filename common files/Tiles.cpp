#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353

ll ans(ll w, ll h){
    ll a = w+h;

    ll b = 1;

    for(ll i=0; i<a; i++){
        b = (2*b) % mod;
    }

    return b;
}

int main ()
{
    ll w, h;
    cin >> w >> h;

    cout << ans(w,h) <<endl;

    return 0;
}
