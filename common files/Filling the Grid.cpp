#include <bits/stdc++.h>
using namespace std;

#define mx 1000000007

int main ()
{
    int h, w;

    cin >> h >> w;

    int r[h], c[w];

    for(int i=0; i<h; i++) cin >> r[i];

    for(int i=0; i<w; i++) cin >> c[i];

    int mat[h][w];

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++)
            mat[i][j] = 0;
    }

    for(int i=0; i<h; i++){
        for(int j=0; j<r[i]; j++)
            mat[i][j] = 1;
    }

    for(int j=0; j<w; j++){
        for(int i=0; i<c[j]; i++)
            mat[i][j] = 1;
    }

    int sum = 0;

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(!mat[i][j]){
                if(r[i] != j && c[j] != i)
                    sum++;
            }

            else{
                if(r[i] == j || c[j] == i){
                    cout << 0;
                    return 0;
                }
            }
        }
    }

    int ans = 1;

    for(int i=0; i<sum; i++){
        ans *= 2;
        ans %= mx;
    }

    cout << ans;

    return 0;
}

