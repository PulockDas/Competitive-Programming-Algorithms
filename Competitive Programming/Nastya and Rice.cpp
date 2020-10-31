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
        ll n, a, b, c, d;
        cin >> n >> a >> b >> c>> d;

        ll c1 = c-d;
        ll c2 = c+d;

        ll a1 = a-b;
        ll a2 = a+b;

        if(a1*n>c2){
            cout<<"No\n";
        }
        else if(a2*n<c1){
            cout<<"No\n";
        }
        else{
            cout << "Yes\n";
        }
    }

    return 0;
}