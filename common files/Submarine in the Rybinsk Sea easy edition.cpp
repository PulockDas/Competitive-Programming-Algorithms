#include <bits/stdc++.h>
using namespace std;
#define mod 998244353
#define ll long long

ll pathao(string a, string b){
    string c;
    ll l = a.length();

    for(ll i=0; i<l; i++){
        c.push_back(a[i]);
        c.push_back(b[i]);
    }

    l *= 2;
    cout << c <<endl;

    ll ans = 0;
    for(ll i=0,j=l-1; i<l; i++,j--){
        ll num = c[j]-'0';
        ans = ans % mod;
        ll p = pow(10, i);
        num = (num*(p % mod)) % mod;
        ans = (ans + num) % mod;
    }

    cout << ans<<endl;

    return ans % mod;
}

int main ()
{
    ll n;
    cin >> n;

    string arr[n];

    for(ll i=0; i<n; i++)
        cin >> arr[i];

    ll ans = 0;
    for(ll i=0; i<n; i++){
        for(ll j=0; j<n; j++){
            ans = ans%mod + pathao(arr[i], arr[j]) % mod;
        }
    }

    cout << ans % mod;

    return 0;
}
