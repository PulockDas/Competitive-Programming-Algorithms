#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 998244353

typedef pair<ll, ll> pll;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;
        n/=2;

        if(n%2==1){
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";

        ll len = n*2;
        ll arr[len];

        bool ch = 1;
        for(ll i=0, k=1; i<n; i++,k++){
            if(k%3 == 0)
                k++;
            
            arr[i] = 2*k;
            if(ch){
                arr[i+n] = arr[i]-1;
                ch = 0;
            }else{
                arr[i+n] = arr[i]+1;
                ch = 1;
            }
        }

        for(ll i=0; i<len; i++) cout << arr[i]<<" ";

        cout << endl;
    }

    return 0;
}