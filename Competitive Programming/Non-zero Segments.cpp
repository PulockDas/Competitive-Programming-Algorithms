#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 998244353
#define loop(i, n) for(ll i=0; i<n; i++)

typedef pair<ll, ll> pll;

void solve(ll test){
    ll n;
    cin >> n;

    set <ll> s;
    s.insert(0);

    ll plus = 0, ans = 0;

    loop(i, n){
        ll num;
        cin >> num;

        plus+=num;

        if(s.find(plus) != s.end()){
            ans++;

            s.clear();
            s.insert(0);
            plus = num;
        }

        s.insert(plus);
    }

    cout << ans << endl;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll test=1;
    // cin >> test;

    for(ll i=1; i<=test; i++){
        solve(i);
    }

    return 0;
}