#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 998244353

typedef pair<ll, ll> pll;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;

    while(t--){

        map<pair<pll, pll>, ll>mx;
        // map<ll, ll>my;

        string s;
        cin>>s;

        ll x, y;
        x=y=0;

        ll len = s.length(), ans=0;
        for(ll i=0; i<len; i++){
            ll a=x, b=y;
            if(s[i]=='W')
                x++;
            else if(s[i]=='E')
                x--;
            else if(s[i]=='N')
                y++;
            else
                y--;

            if(mx[{{a,b},{x,y}}]){
                ans += 1;
            }
            else
                ans += 5;

            mx[{{a,b},{x,y}}] = 1;
            mx[{{x,y},{a,b}}] = 1;
    
        }

        cout << ans<<endl;
    }

    return 0;
}