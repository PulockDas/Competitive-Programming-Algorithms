#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2 * acos(0.0)
#define mod 998244353

typedef pair<ll, ll> pll;
vector<ll> g[1000000];

map <pll, ll> m;

void dijkstra(ll source, ll n)
{
    ll distance[n];
    for (ll i = 0; i < n; i++)
    {
        distance[i] = INT32_MAX;
    }

    distance[source] = 0;

    priority_queue<pll, vector<pll>, greater<pll>> pq;
    pq.push(make_pair(distance[source], source));

    vector<ll> jaoajay;
    jaoajay.push_back(source);

    while (!pq.empty())
    {
        pll top = pq.top();
        pq.pop();

        ll u = top.second;

        for (ll i = 0; i < g[u].size(); i++)
        {

            ll v = g[u][i];
            ll dis = distance[u] + m[make_pair(u, v)];

            if (dis < distance[v])
            {
                distance[v] = dis;
                pq.push(make_pair(dis, v));
                jaoajay.push_back(v);
            }

        }
    }

    ll disans = distance[jaoajay[0]];
    for (ll i = 1; i < jaoajay.size(); i++)
    {
        disans = max(disans, distance[jaoajay[i]]);
    }

    cout << disans << " ";

    ll ans = 0;
    for (ll i = 0; i < jaoajay.size(); i++)
    {
        if (distance[jaoajay[i]] == disans)
            ans++;
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll node, edge, query;
    cin >> node >> edge >> query;

    // ll graph[M][M];
    // memset(graph, 0, sizeof(graph));

    while (edge--)
    {
        ll u, v, w;
        cin >> u >> v >> w;

        if (u == v)
            continue;

        if(m[make_pair(u, v)]==0){
            m[make_pair(u, v)] = w;
            m[make_pair(v, u)] = w;

            g[u].push_back(v);
            g[v].push_back(u);
        }

        else{
            if(m[make_pair(u, v)]>w){
                m[make_pair(u, v)] = w;
                m[make_pair(v, u)] = w;
            }
        }
    }

    while (query--)
    {
        ll source;
        cin >> source;

        dijkstra(source, node);
    }

    return 0;
}
