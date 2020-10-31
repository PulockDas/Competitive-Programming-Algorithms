#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, m, k;
    cin >> n >> m >> k;

    ll khara[n], shoa[m];
    for(ll i=0; i<n; i++) cin >> khara[i];
    for(ll i=0; i<m; i++) cin >> shoa[i];

    vector<ll> kharavec;
    vector<ll> shoavec;

    ll count = 0;
    ll i;
    for(i=0; i<n; i++){
        if(khara[i] == 1){
            count++;
        }
        else{
            if(count != 0)
                kharavec.push_back(count);
            count = 0;
        }
    }

    if(khara[n-1] == 1){
        if(count != 0)
            kharavec.push_back(count);
    }

    count = 0;
    
    for(i=0; i<m; i++){
        if(shoa[i] == 1){
            count++;
        }
        else{
            if(count != 0)
                shoavec.push_back(count);
            count = 0;
        }
    }

    if(shoa[m-1] == 1){
        if(count != 0)
            shoavec.push_back(count);
    }

    ll ga[n+1], gb[m+1];
    memset(ga, 0, sizeof(ga));
    memset(gb, 0, sizeof(gb));

    for(ll j=0; j<kharavec.size(); j++){
        ll num = kharavec[j];

        for(ll m=1; m<=num; m++){
            ga[m] += num-m+1;
        }
    }
    
    for(ll j=0; j<shoavec.size(); j++){
        ll num = shoavec[j];

        for(ll m=1; m<=num; m++){
            gb[m] += num-m+1;
        }
    }

    ll ans = 0;

    for(ll j=1; j<=n; j++){
        if(ga[j] == 0){
            break;
        }

        if(k%j == 0 && k/j <= m){
            ans += ga[j]*gb[k/j];
        }
    }

    cout << ans << endl;

    return 0;
}
    // if(k==1){
    //     ll sumk = 0;
    //     for(ll j=0; j< kharavec.size(); j++)
    //         sumk += kharavec[j];
        
    //     ll sums = 0;

    //     for(ll j=0; j< shoavec.size(); j++)
    //         sums += shoavec[j];
        
    //     cout << sumk*sums << endl;
    //     return 0;
    // }

    // pair<ll, ll> p;
    // vector<pair<ll, ll>>vec;
    // for(ll j=1; j*j<=k; j++){
    //     if(k%j == 0){
    //         vec.push_back(make_pair(j, k/j));
    //     }
    // }

    // sort(kharavec.begin(), kharavec.end(), greater<ll>());
    // sort(shoavec.begin(), shoavec.end(), greater<ll>());

    // for(ll j=0; j<vec.size(); j++){
    //     ll first = vec[j].first;
    //     ll second = vec[j].second;


    // }