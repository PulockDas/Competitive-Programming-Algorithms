#include <bits/stdc++.h>
using namespace std;

void printparenthesis(int i, int j, int n, int *s, char &name){
    if(i==j){
        cout << name++;
        return;
    }

    cout << "(";

    printparenthesis(i, *((s+i*n)+j), n, s, name);

    printparenthesis(*((s+i*n)+j)+1, j, n, s, name);

    cout << ")";
}

void matChainMul(int p[], int n){
    int m[n][n];
    int s[n][n];

    for(int i=1; i<n; i++)
        m[i][i]=0;

    for(int L=2; L<n; L++){
        for(int i=1; i<n-L+1; i++){
            int j = i+L-1;

            m[i][j] = INT_MAX;

            for(int k=i; k<j; k++){
                int q = m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];

                if(m[i][j] > q){
                    m[i][j] = q;
                    s[i][j] = k;
                }
            }
        }
    }

    cout << "The order of multiplication is:\n";
    char name = 'A';

    printparenthesis(1, n-1, n, (int *)s, name);

    cout << "\nThe cost of multiplication is:\n"<<m[1][n-1];
}

int main ()
{
    int p[]={40, 20, 30, 10, 30};
    int n=sizeof(p)/sizeof(p[0]);

    matChainMul(p, n);

    return 0;
}
