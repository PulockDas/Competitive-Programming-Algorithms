#include <bits/stdc++.h>
using namespace std;

vector <int> adj[8];
int visited[8];

void bfs(int s, int n)
{
    for(int i=0;i<n;i++)
        visited[i]=0;
    queue <int> q;
    q.push(s);
    visited[s]=1;

    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<adj[u].size();i++)
        {
            if(visited[adj[u][i]]==0){
                    int v=adj[u][i];
                    q.push(v);
                    cout<<v<<endl;
                    visited[v]=1;
            }
        }
    }
}

int main ()
{
    int s,n;
    while(cin>>s&&cin>>n)
        adj[s].push_back=n;
    bfs(6,8);
    return 0;
}
