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
        ll n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        vector <ll> vec;
        ll len = s.length();
        for(ll i=0; i<len; i++){
            if(s[i] == '0'){
                vec.push_back(i);
            }
        }

        ll m=0;
        
        for(ll i=0; i<vec.size() && k; i++, m++){

            if(s[m] == '0'){
                // m++;
                continue;
            }

            ll num = vec[i] - m;
            if(num <= k){
                s[m] = '0';
                s[vec[i]] = '1';
                k -= num;
            }

            else{
                s[vec[i]-k] = '0';
                s[vec[i]] = '1';
                k = 0;
            }
        }

        cout << s <<endl;
    }

    return 0;
}