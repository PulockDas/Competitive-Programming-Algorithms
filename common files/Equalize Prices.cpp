#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int q, n, k;
    cin >> q;

    while(q--){
        cin >> n >> k;
        int arr[n];

        for(int i=0; i<n; i++)
            cin >> arr[i];

        sort(arr, arr+n);

        int ans = arr[0] + k;

        if(arr[n-1] - ans > k)
            cout << -1;
        else
            cout << ans;

        cout << endl;

    }

    return 0;
}
