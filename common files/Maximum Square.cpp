#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k;
    cin >> k;

    while(k--){
        int n;
        cin >> n;

        int arr[n];

        for(int i=0; i<n; i++) cin >> arr[i];

        int ans;
        for(int j=1; j<=n; j++){
            int m=0;
            for(int i=0; i<n; i++){
                if(arr[i]>= j) m++;

                if(m==j){
                    ans = j;
                    break;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}
