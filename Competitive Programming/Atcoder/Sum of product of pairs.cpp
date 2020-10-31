#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 1000000007
#define loop(i, n) for(ll i=1; i<=n; i++)

typedef pair<ll, ll> pll;

ll power(ll base, ll pow){
    ll ans = 1;

    while(1){
        if(pow % 2 == 1 && pow != 1){
            ans *= base;
        }

        pow /= 2;

        if(pow == 0)
            break;
        base = base*base;
    }

    return ans*base;
}




void solve(ll test){
    ll n;
    cin >> n;

    ll arr[n+1];
    loop(i, n){
        cin >> arr[i];
    }

    ll total[n+1];
    memset(total, 0, sizeof(total));
    total[n] = arr[n];

    for(ll i=n-1; i>1; i--){
        total[i] = (arr[i]+total[i+1])%mod;
        // cout << total[i]<<endl;
    }

    ll ans = 0;
    loop(i, n-1){
        ll num = (arr[i]*total[i+1])%mod;
        // cout << 'num '<<total[i+1]<<endl;
        ans = (ans+num)%mod;
        // cout << ans <<'s'<< endl;
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

    loop(i, test){
        solve(i);
    }

    return 0;
}