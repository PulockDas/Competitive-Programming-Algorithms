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
        ll n, s;
        cin >> n >> s;

        s = 100-s;

        ll arr[n];
        for(ll i=0; i<n; i++) cin >> arr[i];

        ll min0 = INT_MAX, min1 = INT_MAX;

        for(ll i=0; i<n; i++){
            ll num;
            cin >> num;

            if(num){
                min1 = min(min1, arr[i]);
            }
            else{
                min0 = min(min0, arr[i]);
            }
        }

        // cout << min1 <<" "<<min0<<endl;

        if(min1+min0 > s){
            cout << "no\n";
        }else{
            cout<<"yes\n";
        }
    }

    return 0;
}