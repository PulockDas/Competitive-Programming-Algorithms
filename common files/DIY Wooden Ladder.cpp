#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;

    int n;
    while(t--){
        cin >> n;
        int arr[n];

        for(int i=0; i<n; i++)
            cin >> arr[i];

        sort(arr, arr+n, greater<int>());

        int ans = arr[1]-1;
        if(ans <= n-2)
            cout << ans <<endl;

        else
            cout << n-2 <<endl;

    }

    return 0;
}
