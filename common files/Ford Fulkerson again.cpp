#include <bits/stdc++.h>
using namespace std;
#define V 6

bool bfs(int graph[V][V], int s, int t, int parent[]){
    bool visited[V];
    memset(visited, 0, sizeof(visited));

    parent[s] = -1;

    queue <int > q;
    q.push(s);
    visited[s] = 1;

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(int v=0; v<V; v++){
            if(!visited[v] && graph[u][v] > 0){
                parent[v] = u;
                q.push(v);
                visited[v] = 1;
            }
        }
    }

    return (visited[t]);
}

int fordFul(int graph[V][V], int s, int t){
    int parent[V];
    int max_flow = 0;

    while(bfs(graph, s, t, parent)){
        int path_flow = INT_MAX;

        for(int v=t; v!=s; v=parent[v]){
            int u = parent[v];
            path_flow = min(path_flow, graph[u][v]);
        }

        for(int v=t; v!=s; v=parent[v]){
            int u = parent[v];
            graph[u][v] -= path_flow;
            graph[v][u] += path_flow;
        }

        max_flow += path_flow;
    }

    return max_flow;
}

int main ()
{
    int graph[V][V]={{0, 16, 13, 0, 0, 0},
                        {0, 0, 10, 12, 0, 0},
                        {0, 4, 0, 0, 14, 0},
                        {0, 0, 9, 0, 0, 20},
                        {0, 0, 0, 7, 0, 4},
                        {0, 0, 0, 0, 0, 0}};

    cout << "The maximum flow is :\n"<<fordFul(graph, 0, 5);

    return 0;
}
