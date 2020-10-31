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
        ll n;
        cin >> n;

        ll arr[n];
        for(ll i=0; i<n; i++) cin >> arr[i];

        bool ch = 1, no = 0, sesh = 0;
        ll store;
        for(ll i=0; i<n; i++){
            ll in;
            cin >> in;

            if(arr[i] < in){
                if(sesh){
                    no = 1;
                }
                else if(ch){
                    ch = 0;
                    store = in-arr[i];
                }
                else{
                    if(store != (in-arr[i])){
                        no = 1;
                    }
                }
            }
            else if(arr[i]>in){
                no = 1;
            }
            else{
                if(!ch && !no){
                    sesh = 1;
                }
            }
        }

        if(no){
            cout << "NO\n";
        }else{
            cout << "YES\n";
        }
    }

    return 0;
}