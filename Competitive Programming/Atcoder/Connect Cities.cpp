#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 998244353
#define loop(i, n) for(int i=0; i<n; i++)

typedef pair<ll, ll> pll;

ll find(ll num, ll parent[]){
    while(1){
        ll par = parent[num];
        if(par == num){
            return par;
        }
        num = par;
    }
}

void solve(ll test){
    ll n, m;
    cin >> n >> m;

    ll parent[n+1], rank[n+1];
    for(ll i=1; i<=n; i++){      //making set of all members
        parent[i] = i;
        rank[i] = 0;
    }

    loop(i, m){                 //union of nodes
        ll suru, sesh;
        cin >> suru >> sesh;

        ll u = find(suru, parent);
        ll v = find(sesh, parent);

        if(u!=v){
            if(rank[u]<rank[v]){
                parent[suru] = v;
                ll t = u;
                u = v;
                v = t;
            }else{
                parent[sesh] = u;
            }
            parent[v] = u;
            if (rank[u] == rank[v])
                rank[u]++;
        }
    }

    set <ll> s;
    for(ll i=1; i<=n; i++){
        ll num = find(i, parent);
        s.insert(num);
    }

    cout << s.size()-1 <<endl;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll test = 1;
    // cin >> test;

    for(ll i=1; i<=test; i++){
        solve(i);
    }

    return 0;
}