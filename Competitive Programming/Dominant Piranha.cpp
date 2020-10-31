#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 1000000007
#define loop(i, n) for(ll i=1; i<=n; i++)

typedef pair<ll, ll> pll;





void solve(ll test){
    ll n;
    cin >> n;

    ll arr[n];
    ll boro=0;

    for(ll i=0; i<n; i++){
        cin >> arr[i];

        if(boro<arr[i])
            boro = arr[i];
    }

    for(ll i=0; i<n; i++){
        if(arr[i]==boro){
            if(i==0){
                if(arr[i+1]<arr[i]){
                    cout << i+1 <<endl;
                    return;
                }
            }
            else if(i==n-1){
                if(arr[i-1]<arr[i]){
                    cout << i+1 <<endl;
                    return;
                }
            }

            else{
                if(arr[i-1]<arr[i] || arr[i+1]<arr[i]){
                    cout << i+1 <<endl;
                    return;
                }
            }
        }
    }

    cout << -1 <<endl;
    return;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll test;
    cin >> test;

    loop(i, test){
        solve(i);
    }

    return 0;
}