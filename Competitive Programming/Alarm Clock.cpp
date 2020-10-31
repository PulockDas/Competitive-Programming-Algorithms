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

    while (t--)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;

        if(b>=a){
            cout << b <<endl;
            continue;
        }

        if(c<=d){
            cout << -1<<endl;
            continue;
        }

        a = a-b;
        ll cp = c;
        c = c-d;

        ll num = (a+c-1)/c;
        cout << b+num*cp<<endl;
    }
    
    return 0;
}