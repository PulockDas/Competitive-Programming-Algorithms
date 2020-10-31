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
        ll n, m;
        cin >> n >> m;

        if(n==1 || m==1){
            cout << "YES\n";
            continue;
        }

        if(n == 2 && m == 2){
            cout << "YES\n";
            continue;
        }

        else{
            cout << "NO\n";
            continue;
        }
    }
    
    return 0;
}