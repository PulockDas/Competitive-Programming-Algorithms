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
        ll n;
        cin >> n;
        ll m = n;
        n/=2;
        n--;

        ll s= pow(2, m);
        for(ll i=1; i<=n; i++){
            s+=pow(2, i);
        }

        ll s1 = pow(2, m+1)-2;
        s1 = s1- s;

        cout << s-s1<<endl;
    }

    return 0;
}