#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 1000000007
#define loop(i, s, n) for(ll i=s; i<=n; i++)

typedef pair<ll, ll> pll;

ll power(ll base, ll pow){
    ll ans = 1;

    while(1){
        if(pow % 2 == 1 && pow != 1){
            ans *= base;
        }

        pow /= 2;

        if(pow == 0)
            break;
        base = base*base;
    }

    return ans*base;
}

unordered_map<ll,ll> Fib;//Here 0th fib is 1, 1st fib is 2, 2nd fib is 2

ll fib(ll n)
{
    // if(n==0) return 0;
    if(n<2) return 1;
    if(Fib.find(n) != Fib.end()) return Fib[n];
    Fib[n] = (fib((n+1) / 2)*fib(n/2) + fib((n-1) / 2)*fib((n-2) / 2)) % mod;
    return Fib[n];
}




void solve(ll test){
    ll n;
    cin >> n;


    ll arr[n];
    ll lock[n];

    for(ll i=0; i<n; i++){
        cin >> arr[i];
    }

    vector<ll>vec;

    for(ll i=0; i<n; i++){
        cin >> lock[i];

        if(!lock[i]){
            vec.push_back(arr[i]);
            // cout << arr[i]<<" c\n";
        }
    }


    sort(vec.begin(), vec.end(), greater<ll>());

    // for(ll i=0; i<vec.size(); i++)
    //     cout << vec[i]<<' ';
    // cout << endl;

    for(ll i=0, j=0; i<n; i++){
        if(lock[i]){
            cout << arr[i]<<' ';
        }

        else{
            cout << vec[j++]<<' ';
        }
    }

    cout << endl;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll test;
    cin >> test;

    loop(i, 1, test){
        solve(i);
    }

    return 0;
}
