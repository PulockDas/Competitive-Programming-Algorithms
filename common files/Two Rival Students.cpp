#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;
    while(t--){
        int n, x, a, b;
        cin >> n >> x >> a >> b;

        int ans = abs(a-b);

        if(ans + x >= n) cout << n-1;

        else cout << ans+x;

        cout << endl;

    }

    return 0;
}
