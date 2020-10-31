#include<bits/stdc++.h>

int main ()
{
    int n;
    scanf("%d", &n);

    int a[n][n+1], i, j, k;

    for(i=0; i<n; i++){
        for(j=0; j<n+1; j++){
            printf("\n a[%d][%d]\n", i, j);
            scanf("%d ", &a[i][j]);
        }
    }

    return 0;
}
