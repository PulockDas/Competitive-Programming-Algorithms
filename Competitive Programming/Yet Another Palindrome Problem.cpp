#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;

    here:
    while(t--){
        ll n;
        cin >> n;

        ll arr[n];

        for(ll i=0; i<n; i++){
            cin >> arr[i];
        }

        for(ll i=0; i<n; i++){
            for(ll j=i+2; j<n; j++){
                if(arr[i] == arr[j]){
                    cout << "YES\n";
                    goto here;
                }
            }
        }

        cout << "NO\n";
    }

    return 0;
}