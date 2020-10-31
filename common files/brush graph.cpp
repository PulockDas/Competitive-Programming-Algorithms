#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--){
        cout<<"\n";
        int n,m;
        cin>>n>>m;

        int dis[n+1][n+1],sho[n+1],mark[n+1];
        vector<int>vec[n+1];

        for(int i=1; i<n+1 ; i++){
            for(int j=1; j<n+1 ; j++)
                dis[i][j]=0;
        }

        for(int i=0; i<m ; i++){
            int u,v,w;
            cin>>u>>v>>w;

            dis[u][v]=w;
            dis[v][u]=w;
            vec[u].push_back(v);
            vec[v].push_back(u);
        }

        for(int i=2; i<n+1; i++){
            sho[i]=dis[1][i];
        }






        }




    }



    return 0;
}
