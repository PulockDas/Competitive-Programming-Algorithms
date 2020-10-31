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
    for(ll i=0; i<n; i++) arr[i] = i+1;

    cout << 2 <<endl;
    for(ll i=n-1; i>0; i--){
        cout << arr[i] << ' '<<arr[i-1]<<endl;
        arr[i-1]= (arr[i]+arr[i-1]+1)/2;
    }
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