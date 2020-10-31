#include <bits/stdc++.h>
using namespace std;

int coun (int coins[], int m, int n){

    int table[n+1][m];

    for(int i=0; i<m; i++)
        table[0][i] = 1;

    for(int i=1; i<n+1; i++){
        for(int j=0; j<m; j++){

            int x = (i-coins[j] >= 0) ? table[i-coins[j]][j] : 0;

            int y = (j >= 1) ? table[i][j-1] : 0;

            table[i][j] = x + y;
        }
    }

    return table[n][m-1];
}

int main ()
{
    int coins[] = {1, 2, 3};

    int m = sizeof(coins)/sizeof(coins[0]);

    int n = 4;

    cout << "The possibilities of making " << n <<" money is : \n";

    cout << coun (coins, m, n);

    return 0;
}
