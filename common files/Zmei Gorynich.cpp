#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;

    while(t--){
        int n, init;
        cin >> n >> init;

        int d[n], h[n], sum[n];
        int b = -1;

        for(int i=0; i<n; i++){
            cin >> d[i] >> h[i];

            if(d[i] > b)
                b = d[i];

            sum[i] = d[i]-h[i];
        }

        if(b >= init){
            cout << 1<<endl;
            continue;
        }

        sort(sum, sum+n);

        if(sum[n-1] <= 0){
            cout << -1<<endl;
            continue;
        }

        int ans = ceil((init-b)/(sum[n-1]*1.0)) + 1;
        cout << ans<<endl;

    }

    return 0;
}
