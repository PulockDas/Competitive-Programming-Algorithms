#include <bits/stdc++.h>
using namespace std;
#define max_ 100000
vector < int > edges[max_];
vector < int > cost[max_];
int indegree[max_];

int main ()
{
    int node, edge;
    cin>>node>>edge;

    for(int i=0; i<edge; i++){
        int x, y, z;
        cin>>x >>y >>z;
        edges[x].push_back(y);
        cost[x].push_back(z);
        indegree[y]++;
    }

    for(int i=1; i<=node; i++){
        cout<<"Adjacent of "<<i<<":"<<endl;
        for(int j=0; j<edges[i].size(); j++)
            cout<<edges[i][j]<<"\t";
        cout<<"\n";
    }

    for(int i=1; i<=node; i++){
        cout<<"The costs of edges starting by "<<i<<':'<<endl;

        for(int j=0; j<edges[i].size(); j++)
            cout<<edges[i][j]<<"\t"<<cost[i][j]<<endl;

    }

    for(int i=1; i<=node; i++){
            cout<<"The indegree and outdegree of "<<i<<':'<<endl;

            cout<<indegree[i]<<"\t"<<edges[i].size()<<endl;
    }

    return 0;
}
