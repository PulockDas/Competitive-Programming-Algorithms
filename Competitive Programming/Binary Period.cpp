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
        string deya;
        cin >> deya;

        ll len = deya.length();
        bool ch = true;
        for(ll i=1; i<len; i++){
            if(deya[i] != deya[0]){
                ch = false;
                break;
            }
        }

        if(!ch){
            for(ll i=1; i<deya.length(); i++){
                if(deya[i]==deya[i-1]){
                    if(deya[i]=='1')
                        deya.insert(i, "0");
                    else
                        deya.insert(i, "1");
                    i++;
                }
            }
        }

        cout << deya <<endl;
    }

    return 0;
}