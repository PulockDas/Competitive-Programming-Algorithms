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
        for(ll i=0; i<n; i++) cin >> arr[i];

        sort(arr, arr+n);

        ll ans[n];

        for(ll k=n-1, i=n-1, j=0; i>=j; i--,j++){
            ans[k--] = arr[i];
            if(i != j)
                ans[k--] = arr[j]; 
        }

        for(ll i=0; i<n; i++)
            cout << ans[i]<<" ";
        cout << endl;
    }

    return 0;
}