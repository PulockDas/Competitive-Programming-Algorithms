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
        ll n, x;
        cin >> n >> x;

        ll odd, even;
        odd=even=0;

        for(ll i=0; i<n; i++){
            ll in;
            cin >> in;

            if(in%2 == 0) even++;
            else odd++;
        }

        if(x%2 == 0){
            bool ch = true;
            ll i=1;

            while(ch){
                if(i>x) break;
                if(i <= odd && x-i <= even){
                    ch = false;
                }

                i+=2;
            }

            if(ch)
                cout << "No\n";
            else
                cout << "Yes\n";
        }

        else{
            bool ch = true;
            ll i=0;

            while(ch){
                if(i>x) break;
                if(i <= even && x-i <= odd){
                    ch = false;
                }

                i+=2;
            }

            if(ch)
                cout << "No\n";
            else
                cout << "Yes\n";
        }
    }

    return 0;
}