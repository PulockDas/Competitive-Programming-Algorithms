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
        ll a, b, n, s;
        cin >> a >> b >> n >> s;

        ll num = s/n;

        if(num <= a){
            ll news = s-num*n;
            if(news <= b){
                cout << "YES\n";
                // continue;
            }
            else{
                cout << "NO\n";
            }
            continue;
        }

        ll news = s-a*n;

        if(news<=b){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }

    return 0;
}