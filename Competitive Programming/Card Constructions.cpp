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

        ll final=0;
        ll n;
        cin >> n;

        while(n>1){
            ll ans = (-1+sqrt(1+24*n*1.0))/6;

            final ++;
            // cout << final<<" ";

            n-=2+(ans-1)*(3*ans+4)/2;
            // cout << n << " ";
        }

        cout << final<<endl;

    }

    return 0;
}