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

    ll n, max;
    cin >> n >> max;

    ll arr[n], ans[n];

    for(ll i=0; i<n; i++) cin>>arr[i];
    sort(arr, arr+n);

    ll s=0;

    for(ll i=0; i<n; i++){
        s+=arr[i];
        ans[i] = s;

        if(i>=max){
            ans[i] = ans[i]+ans[i-max];
        }

        cout << ans[i]<<" ";
    }
    cout << endl;

    return 0;
}