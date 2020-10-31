#include <bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 1000000007
#define loop(i, n) for(ll i=1; i<=n; i++)

typedef pair<ll, ll> pll;



void solve(ll test){
    ll n;
    cin >> n;

    string s;
    cin >> s;

    vector <vector<ll>> vec(26);

    for(ll i=0; i<n; i++){
        vec[s[i]-'a'].push_back(i);
    }

    reverse(s.begin(), s.end());
    ordered_set <ll> or_set;
    map<ll, ll> m;

    ll ans = 0;
    for(ll i=0; i<n; i++){
        ll man = s[i]-'a';
        man = vec[man][m[man]++];
        or_set.insert(man);

        ans += man-or_set.order_of_key(man);
    }

    cout<<ans<<endl;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll test=1;
    // cin >> test;

    loop(i, test){
        solve(i);
    }

    return 0;
}