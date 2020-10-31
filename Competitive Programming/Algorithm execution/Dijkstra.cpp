#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 998244353
typedef pair<ll, ll> pll;
vector<ll> g[100000];
vector<ll> cost[100000];

void dijkstra(ll source, ll n){
    ll distance[n];
    for(ll i=0; i<n; i++){
        distance[i] = INT64_MAX;
    }

    // cout<< "dhukse\n";

    distance[source] = 0;

    priority_queue <pll, vector<pll>, greater<pll>> pq;
    pq.push(make_pair(distance[source], source));

    // cout << "dhukse\n";

    while(!pq.empty()){
        pll top = pq.top();
        pq.pop();

        ll u = top.second;

        // cout << g[u].size()<<endl;

        for(ll i=0; i<g[u].size(); i++){

            ll v = g[u][i];
            ll dis = distance[u]+cost[u][i];

            if(dis < distance[v]){
                distance[v] = dis;
                pq.push(make_pair(dis, v));
            }

            // cout <<i<< " bar\n";
        }
    }

    for(ll i=0; i<n; i++){
        cout << source <<"-->"<<i<<": "<< distance[i]<<endl;
    }
    cout << endl;
}

int main ()
{
    ll node, edge;
    cin >> node >> edge;

    while(edge--){
        ll u, v, w;
        cin >> u >> v >> w;

        g[u].push_back(v);
        g[v].push_back(u);

        cost[u].push_back(w);
        cost[v].push_back(w);
        // cout << "d"<<edge<<endl;
    }

    for(ll i=0; i<node; i++){
        dijkstra(i, node);
    }

    return 0;
}