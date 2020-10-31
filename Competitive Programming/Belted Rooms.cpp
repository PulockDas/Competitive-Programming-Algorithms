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

    string s;
    cin >> s;

    bool clock=false, anti_clock=false;

    for(ll i=0; i<n; i++){
        if(s[i] == '>'){
            clock=true;
        }
        else if(s[i] == '<'){
            anti_clock = true;
        }
    }

    ll ans = 0;
    for(ll i=0; i<n; i++){
        ll j;
        if(!i){
            j=n-1;
        }else{
            j = i-1;
        }

        if(s[i]=='-'||s[j]=='-'){
            ans++;
            continue;
        }
        if(!(clock && anti_clock)){
            ans++;
        }
    }

    cout<<ans<<endl;
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