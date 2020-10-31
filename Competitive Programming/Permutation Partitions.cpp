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

    ll n, k;
    cin >> n >> k;

    ll choto = n-k+1;
    ll boro = n;

    vector <ll> vec;

    ll input;
    for(ll i=0; i<n; i++){
        cin >> input;
        if(input >= choto && input <= boro){
            vec.push_back(i+1);
        }
    }

    if(k==1){
        cout << n << ' '<< 1<<endl;
        return 0;
    }

    ll ans = vec[1]-vec[0];
    for(ll i=1; i<k-1; i++){
        ll por = vec[i+1]-vec[i];
        ans = (ans*por)%mod;
    }

    cout << k*n-((k-1)*k)/2 << " ";
    cout << ans << endl;

    return 0;
}