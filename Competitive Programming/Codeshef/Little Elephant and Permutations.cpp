#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 998244353

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

        ll antiinv = 0;
        cin >> arr[0];
        for(ll i=1; i<n; i++){
            cin >> arr[i];
            if(arr[i]<arr[i-1])
                antiinv++;
        }

        ll inv = 0;
        for(ll i=0; i<n-1; i++){
            for(ll j=i+1; j<n; j++){
                if(arr[i]>arr[j])
                    inv++;
            }
        }

        if(inv==antiinv){
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}