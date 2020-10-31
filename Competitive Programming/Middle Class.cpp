#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 998244353

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;

    here:
    while(t--){
        ll n;
        db x;
        cin >> n >> x;

        db arr[n];
        for(ll i=0; i<n; i++) cin >> arr[i];

        sort(arr, arr+n);

        db sum[n];
        sum[0] = arr[0];

        for(ll i=1; i<n; i++){
            sum[i] = sum[i-1]+arr[i];
        }

        for(ll i=n-1; i>-1; i--){
            db num = sum[i]/(i+1);
            if(num >= x){
                cout << i+1 << endl;
                goto here;
            }
        }

        cout << 0 << endl;
        
    }

    return 0;
}