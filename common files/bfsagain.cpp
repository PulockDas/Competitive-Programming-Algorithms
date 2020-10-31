#include <bits/stdc++.h>
using namespace std;

int a[100][100], dis[100], visited[100];

void bfs(int src, int node){
    queue<int>q;
    q.push(src);
    visited[src]=1;
    while(!q.empty()){
        int n=q.front();
        q.pop();
        cout<<n<<endl;
        for(int i=0; i<node; i++){
            if(a[n][i]==1 && !visited[i]){
                dis[i]=dis[n]+1;
                visited[i]=1;
                q.push(i);
            }

        }

    }

}

int main ()
{
    int from, to, node, edge;
    cin>>node>>edge;
    for(int i=0; i<edge; i++){
        cin>>from>>to;
        a[from][to]=1;
        a[to][from]=1;
    }

    bfs(0, node);
    for(int i=0; i<node; i++){
        cout<<dis[i]<<endl;
    }

    return 0;
}
