#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 998244353
#define loop(i, n) for(ll i=1; i<=n; i++)

typedef pair<ll, ll> pll;

void solve(ll test){
    ll n, m, p;
    cin >> n >> m >> p;

    ll fc[n+1];
    ll gc[n+1];


    loop(i, n){
        cin >> fc[i];
        fc[i] %= p;
    }
    
    loop(i, n){
        cin >> gc[i];
        gc[i] %= p;
    }

    


}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll test;
    cin >> test;

    loop(i, test){
        solve(i);
    }

    return 0;
}