#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 1000000007
#define loop(i, n) for(ll i=1; i<=n; i++)

typedef pair<ll, ll> pll;




void solve(ll test){
    ll n, k;
    cin >> n >> k;

    ll arr[n+1];

    for(ll i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n, greater<ll>());

    ll ans = arr[0];

    for(ll i=1, j=0; i<n && j<k; i++,j++){
        if(!arr[i]){
            break;
        }
        ans+=arr[i];
    }

    cout << ans<<endl;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll test;
    cin >> test;

    loop(i, test){
        solve(i);
    }

    return 0;
}