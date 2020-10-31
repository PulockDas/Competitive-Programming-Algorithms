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
        cin >> arr[0];
        ll maxi = arr[0];
        ll best = 0;

        for(ll i=1; i<n; i++){
            cin >> arr[i];

            if(arr[i]<maxi){
                best = max(best, maxi-arr[i]);
            }

            else{
                maxi = arr[i];
            }
        }

        cout << ceil(log2((db)best+1))<<endl;
    }

    return 0;
}