#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
    ll b, g, n;
    cin >> b >> g >> n;

    if(b>g){
        ll t=g;
        g=b;
        b=t;
    }

    ll ans = 0;
    for(ll i=n; i>-1; i--){
        if(g<i)
            continue;
        ll baki = n-i;
        if(baki<=b) ans++;
        else break;
    }

    cout << ans;

    return 0;
}
