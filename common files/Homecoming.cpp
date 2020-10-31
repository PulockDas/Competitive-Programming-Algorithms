#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;

    while(t--){
        ll a, b, p;
        cin >> a >> b >> p;

        string s;
        cin >> s;

        ll l = s.length();
        map <ll, ll> ind_cost;

        ll cost = 0;

        for(ll i=0; i<l-1; i++){
            if(s[i] != s[i+1]){
                if(s[i] == 'A')
                    cost += a;
                else
                    cost += b;

                ind_cost.insert({i+2, cost});
            }

            else if(i+1 == l-1){
                if(s[i] == 'A')
                    cost += a;
                else
                    cost += b;

                ind_cost.insert({i+2, cost});
            }
        }

        if(cost <= p){
            cout << 1 << endl;
            continue;
        }

        for(auto itr=ind_cost.begin(); itr!=ind_cost.end(); ++itr){
            if(cost-itr->second <= p){
                cout << itr->first << endl;
                break;
            }
        }
    }

    return 0;
}
