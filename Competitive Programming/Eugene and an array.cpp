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

    ll n;
    cin >> n;

    ll arr[n];
    ll n0 = 0;

    for(ll i=0; i<n; i++){
        cin >> arr[i];
        if(!arr[i]){
            n0++;
        }
    }

    ll ans = n-n0;

    ll sum[n], revsum[n];
    memset(sum, 0, sizeof(sum));
    memset(revsum, 0, sizeof(revsum));
    
    for(ll )



    return 0;
}