#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 998244353

typedef pair<ll, ll> pll;

ll finding(string s, ll beg, ll mid, ll end){
    ll len = s.length()-2;

    for(ll i=0; i<len; i++){
        if()
    }
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        ll len = s.length();
        ll fir1=-1;
        ll fir2=-1;
        ll fir3=-1;

        for(ll i=0; i<len; i++){
            if(s[i] == '1'){
                fir1 = 1;
            }

            else if(s[i] == '2'){
                fir2 = 1;
            }

            else{
                fir3 = 1;
            }
        }

        if(fir1 == -1 || fir2 == -1 || fir3 == -1){
            cout << 0 << endl;
            continue;
        }

        ll ans = INT32_MAX;
        ans = min(ans, finding(s, 1, 2, 3)); 
        ans = min(ans, finding(s, 1, 3, 2));

        ans = min(ans, finding(s, 2, 3, 1)); 
        ans = min(ans, finding(s, 2, 1, 3));

        ans = min(ans, finding(s, 3, 1, 2)); 
        ans = min(ans, finding(s, 3, 2, 1));

        cout << ans << endl;
    }

    return 0;
}