#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, k;
ll x;
vector <ll > a;

bool check(ll x){
    ll moves = 0;
    for(ll i=n/2; i<n; i++){
        if(x-a[i] > 0) moves += x-a[i];
        if(moves > k) return false;
    }

    if(moves <= k) return true;
    return false;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin >> n >> k;

    for(ll i=0; i<n; i++){
        cin >> x;
        a.push_back(x);
    }

    sort(a.begin(), a.end());

    ll small = 1;
    ll big = a[a.size()-1]+k;

    while(small != big){
        ll m = (small+big+1)/2;

        if(check(m)) small = m;

        else big = big-1;

    }

    cout << small;

    return 0;
}
