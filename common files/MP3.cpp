//The core part of this code is copy-paste:(

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, I, x;
    cin >> n >> I;

    map <ll, ll> m;

    for(ll i=0; i<n; i++){
        cin >> x;
        m[x]++;
    }

    ll len = m.size();

    ll dorkar = ceil(log2(len)) * n;
    if(dorkar <= 8*I){
        cout << 0;
        return 0;
    }

    ll k = (8*I)/n;
    ll K = 1;
    for(ll i=0; i<k; i++) K *= 2;

    vector <ll > a;
    for(auto x : m) a.push_back(x.second);

    ll M = 1e9;
    ll z = 0;

    for(ll i=0; i<K; i++) z += a[i];

    M = min(M, n-z);

    for(ll i=K; i<len; i++){
        z -= a[i-k];
        z += a[i];
        M = min(M, n-z);
    }

    cout << M << endl;


    return 0;
}
