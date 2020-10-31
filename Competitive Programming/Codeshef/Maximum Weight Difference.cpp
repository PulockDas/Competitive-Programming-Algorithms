#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 998244353
#define loop(i, n) for( ; i<=n; i++)

typedef pair<ll, ll> pll;

void solve(ll test){
    ll n, k;
    cin >> n >> k;

    ll arr[n], total[n];
    memset(total, 0, sizeof(total));

    ll i =0;
    loop(i, n-1){
        cin >> arr[i];
    }

    sort(arr, arr+n);
    total[0] = arr[0];

    i=1;
    loop(i, n-1){
        total[i] = total[i-1]+arr[i];
    }

    ll choto = total[k-1];
    ll boro = total[n-1]-total[n-k-1];

    cout << max(total[n-1]-2*choto, 2*boro-total[n-1])<<endl;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll test;
    cin >> test;

    ll i = 1;
    loop(i, test){
        solve(i);
    }

    return 0;
}