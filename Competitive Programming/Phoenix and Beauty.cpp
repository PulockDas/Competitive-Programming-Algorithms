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
        ll n, k;

        cin >> n >> k;

        set<ll> s;

        for(ll i=0; i<n; i++){
            ll input;
            cin >> input;

            s.insert(input);
        }

        if(k<s.size()){
            cout << -1<<endl;
            continue;
        }

        cout << n*k<<endl;

        for(ll i=0; i<n; i++){
            for(ll b:s){
                cout << b <<" ";
            }

            for(ll j=0; j<k-s.size(); j++){
                cout << n <<" ";
            }
        }

        cout<<endl;
    }

    return 0;
}