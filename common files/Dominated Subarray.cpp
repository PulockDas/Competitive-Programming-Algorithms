#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
    ll t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        vector <vector<ll> > vec(n+1);

        for(ll i=0; i<n; i++){
            ll input;
            cin >> input;

            vec[input].push_back(i);
        }

        ll mi = INT_MAX;

        n++;
        for(ll i=1; i<n; i++){
            if(vec[i].size()<2)
                continue;

            for(ll j=0, k=1; k<vec[i].size(); j++, k++){
                if(vec[i][k]-vec[i][j] < mi)
                    mi = vec[i][k]-vec[i][j];
            }

        }

        if(mi == INT_MAX){
            cout << -1 <<endl;
            continue;
        }

        cout << mi+1 << endl;
    }

    return 0;
}
