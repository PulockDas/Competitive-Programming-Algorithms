#include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long t;
    cin >> t;
    long long n;

    here:
    while(t--){
        cin >> n;

        long long arr[n];

        for(long long i=0; i<n; i++)
            cin >> arr[i];

        sort(arr, arr+n);

        long long ans;

        if(n%2 == 0)
            ans = arr[(n-1)/2] * arr[n/2];

        else
            ans = arr[(n-1)/2] *  arr[(n-1)/2];

        long long num = 0;
        for(long long i=2; i*i<=ans; i++){
            if(ans % i == 0){
                if(ans/i != i)
                    num += 2;
                else
                    num++;
            }
        }

        if(num != n){
            cout << -1 << endl;
            goto here;
        }

        for(long long i=0; i<n; i++){
            if(ans % arr[i] != 0 || ans == arr[n-1]){
                cout << -1 << endl;
                goto here;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
