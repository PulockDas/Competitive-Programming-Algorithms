#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 1000000007
#define loop(i, n) for(ll i=1; i<=n; i++)

typedef pair<ll, ll> pll;





void solve(ll test){
    ll n;
    cin >> n;

    ll arr[n];
    cin >> arr[0];

    bool yes=0;

    for(ll i=1; i<n; i++){
        cin >> arr[i];

        if(arr[i]!=arr[0]){
            yes = 1;
        }
    }

    if(!yes){
        cout << "NO\n";
        return;
    }

    cout << "YES\n";

    vector<ll>vec;

    ll sesh;
    for(ll i=1; i<n; i++){
        if(arr[i]!=arr[0]){
            cout << i+1 <<' '<<1<<endl;
            sesh=i;
        }
        else{
            vec.push_back(i+1);
        }
    }

    for(ll i=0; i<vec.size(); i++){
        cout << sesh+1<<' '<<vec[i]<<endl;
    }

    return;
    
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