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
        ll n ;
        ll a ;
        ll d ;

        cin >> n >> a >> d;

        cout << (n*(2*a+(n-1)*d))/2<<endl;
    }

    return 0;
}