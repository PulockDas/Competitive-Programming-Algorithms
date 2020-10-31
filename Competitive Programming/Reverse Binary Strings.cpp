#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2 * acos(0.0)
#define mod 1000000007
#define loop(i, n) for (ll i = 1; i <= n; i++)

typedef pair<ll, ll> pll;

void solve(ll test)
{
    ll n;
    string s;

    cin >> n >> s;

    ll one=0, zero=0;

    for(ll i=1; i<n; i++){
        if(s[i]=='1' && s[i-1]=='1')
            one++;

        else if(s[i]=='0' && s[i-1]=='0')
            zero++;
    }

    cout<< max(one, zero)<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll test;
    cin >> test;

    loop(i, test)
    {
        solve(i);
    }

    return 0;
}