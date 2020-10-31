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

    while (t--)
    {
        map <ll, vector<ll>>mdeya;
        map <ll, vector<ll>>msorted;
        ll n, k;
        cin >> n >> k;

        ll arr[n];
        for(ll i=0; i<n; i++){
            cin >> arr[i];
            mdeya[arr[i]].push_back(i);
        }

        sort(arr, arr+n);
        set <ll> s;
        set <ll> :: iterator it;

        for(ll i=0; i<n; i++){
            msorted[arr[i]].push_back(i);
            s.insert(arr[i]);
        }

        for(it = s.begin(); it!= s.end(); ++it){
            ll man = *it;
            for(ll i=0; i<mdeya[man].size(); i++){
                for(ll j=0; j<msorted[man].size(); j++){
                    if()
                }
            }
        }

    }
    


    return 0;
}