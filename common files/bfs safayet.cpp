#include <bits/stdc++.h>
using namespace std;

#define m 100
vector <int> edges[m];
int level[m];
int mark[m];

int main ()
{
    int node, edge;
    cin>>node >>edge;
    for(int i=1; i<=edge; i++){
        int x, y;
        cin>>x >>y;
        edges[x].push_back(y);
        edges[y].push_back(x);
    }

    int source, des;
    cin>>source >>des;

    if(source == des){
        cout<<0<<endl;
        return 0;
    }
    mark[source]=1;
    level[source]=0;
    queue<int> q;

    q.push(source);

    while(!q.empty()){
        int v=q.front();
        q.pop();

        int l=edges[v].size();
        for(int i=0; i<l; i++){

            int child=edges[v][i];
            if(!mark[child]){

                q.push(child);
                mark[child]=1;
                level[child]=level[v]+1;

                if(child==des){
                    cout<<"Answer is :\n"<<level[child];
                    return 0;
                }
            }
        }
    }

    cout<<"There's no path to reach destination :(";

    return 0;
}
