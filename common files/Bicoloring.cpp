#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, l;

    sesh :
    while(true){
        //cout << "dhukse";
        cin >> n;

        if(!n)
            return 0;
        //else cout << "mra";

        cin >> l;

        int mat[n][n];

        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                mat[i][j] = 0;

        while(l--){
            int x, y;
            cin >> x >> y;

            mat[x][y] = 1;
            mat[y][x] = 1;
        }

        int color[n];
        memset(color, 0, sizeof(color));

        queue <int > q;
        q.push(0);

        color[0] = 1;

        while(!q.empty()){

            int k = q.front();
            q.pop();

            //cout << k <<endl;

            for(int i=0; i<n; i++){
                if(i != k && mat[k][i] == 1){

                    //cout << i <<endl;

                    if(color[i] != 0 && color[k] == color[i]){
                        cout << "NOT BICOLORABLE.\n";
                        goto sesh;
                    }

                    if(color[i] == 0){
                        q.push(i);
                        if(color[k] == 1) color[i] = 2;
                        else color[i] = 1;
                    }
                }

            }
            //cout << endl;

        }

        cout << "BICOLORABLE.\n";
    }

    return 0;
}
