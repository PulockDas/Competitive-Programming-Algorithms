#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int q;
    cin >> q;
    int n, m;

    while(q--){
        cin >> n >> m;
        char arr[n][m];

        int row[n], column[m];

        for(int i=0; i<n; i++)
            row[i] = 0;

        for(int i=0; i<m; i++)
            column[i] = 0;

        for(int i=0; i<n; i++){

            for(int j=0; j<m; j++){
                cin >> arr[i][j];

                if(arr[i][j] == '.'){
                    row[i]++;
                    column[j]++;
                }
            }
        }

        int ans = m+n;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++)
                ans = min(ans, row[i]+column[j] - (arr[i][j] == '.'));
        }

        cout << ans << endl;
    }

    return 0;
}
