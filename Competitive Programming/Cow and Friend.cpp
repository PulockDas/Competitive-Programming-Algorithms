#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;

    while (t--)
    {
        ll n, x;
        cin >> n >> x;

        ll arr[n];
        bool ch = false;
        for(ll i=0; i<n; i++){
            cin >> arr[i];
            if(arr[i] == x){
                ch = true;
            }
        }

        if(ch){
            cout << 1 << endl;
            continue;
        }

        sort(arr, arr+n);
        ll big = arr[n-1];
        ll b2 = 2;
        
        cout << max(b2,(x+big-1)/big) << endl;
    }
    
    return 0;
}