#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 1000000007
#define loop(i, n) for(ll i=1; i<=n; i++)

typedef pair<ll, ll> pll;




void solve(ll test){
    ll n, m;
    cin >> n >> m;

    ll sum=0;

    for(ll i=0; i<n; i++){
        ll input;
        cin >> input;

        sum+=input;
    }

    if(sum==m) cout << "YES\n";
    else cout << "NO\n"
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