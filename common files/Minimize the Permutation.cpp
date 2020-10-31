#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int q;
    cin >> q;

    while(q--){
        int n;
        cin >> n;
        int arr[n];

        int pos[n+1];

        int vis[n+1];
        memset(vis, 0, sizeof(vis));

        for(int i=0; i<n; i++){
            cin >> arr[i];
            pos[arr[i]] = i;
        }

        int mov = n-1;
        int suru = 1;
        for(int i=0; i<n-1 && mov != 0;){
            if(suru != arr[i] && !vis[suru]){
                int p = pos[suru];
                for(int j=p; j>i; j--){
                    arr[j] = arr[j-1];
                    vis[arr[j-1]] = 1;
                }

                arr[i] = suru;
                mov -= p-i;
                i += p-i-1;

                vis[suru] = 1;
                suru++;
            }

            else{
                vis[suru] = 1;
                suru++;
            }

            i++;
        }

        for(int i=0;i<n; i++){
            cout << arr[i]<<" ";
        }

        cout << endl;

    }

    return 0;
}
