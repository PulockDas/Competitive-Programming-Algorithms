#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>

void chain_multi(int p[], int n){
    int m[n][n], s[n][n];
    map <pii, pii> ma;

    for(int i=1; i<n; i++)
        m[i][i] = 0;

    for(int L=2; L<n; L++){
        for(int i=1; i<n-L+1; i++){
            int j = i+L-1;
            m[i][j] = INT_MAX;

            for(int k=i; k<=j-1; k++){
                int q = m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
                if(m[i][j] > q){
                    m[i][j] = q;
                    s[i][j] = k;
                    ma[make_pair(i, j)] = make_pair(i, k);
                }
            }

        }
    }
}

int main ()
{
    int p[] = {5, 4, 6, 2, 7};
    int n = sizeof(p)/sizeof(p[0]);

    chain_multi(p, n);

    return 0;
}
