#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 998244353

typedef pair<ll, ll> pll;

vector <ll> g[200001];
ll childnum[200001];
ll childnum2[200001];
ll parent[200001];
ll level[200001];

void bfs(ll source, ll node){

    level[source] = 0;

    queue<ll> q;
    q.push(source);
    bool visted[node];
    memset(visted, 0, sizeof(visted));
    visted[source] = 1;

    while(!q.empty()){
        ll top = q.front();
        q.pop();

        for(ll i=0; i<g[top].size(); i++){

            ll v = g[top][i];

            if(!visted[v]){
                visted[v] = 1;
                level[v] = level[top]+1;
                q.push(v);

                parent[v]=top;
                childnum[top]++;
            }
        }   
    }
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, k;
    cin >> n >> k;
    ll node = n+1;

    n--;

    while(n--){
        ll u, v;
        cin >> u >> v;

        g[u].push_back(v);
        g[v].push_back(u);
    }

    bfs(1, node);

    // cout << endl;
    // for(ll i=2; i<node; i++)
    //     cout << childnum2[i]<<endl;

    for(ll i=2; i<node; i++){
        if(childnum[i] == 0){
            ll p = parent[i];
            ll son = i;

            while(p!=1){
                childnum2[p] += (childnum2[son]+1);
                son = p;
                p = parent[p];
            }
        }
        // cout << childnum2[i]<<" "<<i<<endl;
    }

    // cout << endl;
    // for(ll i=2; i<node; i++)
    //     cout << childnum2[i]<<endl;

    for(ll i=2; i<node; i++){
        level[i] = level[i]-childnum2[i];
    }

    sort(level, level+node, greater<ll>());

    ll sum = 0;
    for(ll i=0; i<k; i++){
        sum += level[i];
    }

    cout << sum <<endl;

    return 0;
}