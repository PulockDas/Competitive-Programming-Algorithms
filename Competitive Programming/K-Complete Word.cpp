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

    ll t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        ll len = n/k;
        string chotos[len];

        for(ll i=0,j=0; i<n; i+=k,j++){
            chotos[j] = s.substr(i, k);
        }

        ll ans = 0;

        for(ll i=0,j=k-1; i<=j; i++,j--){
            map <char, ll> m;

            for(ll l=0; l<len; l++){
                char c1 = chotos[l][i];
                char c2 = chotos[l][j];

                m[c1]++;

                if(i!=j)
                    m[c2]++;
            }

            ll boro = -1;
            for(pair<char, ll> element : m){
                if(boro < element.second)
                    boro = element.second;
            }

            if(i != j){
                ans += 2*len - boro;
            }
            else{
                ans += len-boro;
            }
        }
        
        cout << ans << endl;
    }

    return 0;
}