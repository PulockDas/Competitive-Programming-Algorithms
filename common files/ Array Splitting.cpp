#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
    ll n, k;
    cin >> n >> k;

    ll suru, in;
    cin >> suru;
    vector <ll > vec;

    for(ll i=1; i<n; i++){
        cin >> in;
        vec.push_back(in-suru);
        suru = in;
    }

    sort(vec.begin(), vec.end());
    ll ans = 0;

    ll l = vec.size() - k + 1;
    for(ll i=0; i<l; i++)
        ans += vec[i];

    cout << ans;

    return 0;
}
