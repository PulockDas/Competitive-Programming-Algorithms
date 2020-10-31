#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 1000000007
#define loop(i, m) for(ll i=1; i<=m; i++)

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

unordered_map<ll,ll> Fib;
 
ll fib(ll n)
{
    if(n<2) return 1;
    if(Fib.find(n) != Fib.end()) return Fib[n];
    Fib[n] = (fib((n+1) / 2)*fib(n/2) + fib((n-1) / 2)*fib((n-2) / 2)) % mod;
    return Fib[n];
}




void solve(ll test){
    ll result = 0;

    ll m, n;
    cin >> m>>n;

    ll A[m+1], B[m+1];

    loop(i, m){
        cin >>A[i];
    }
    
    loop(i, m){
        cin >>B[i];
    }

    loop(i, m){
        for(ll j=1; j<=m; j++){
            ll two = 2;

            ll size = max(two, n);

            ll num;

            if(size == 2){
                num = B[j];
                goto here;
            }

            // cout <<size<<" s "<< fib(size-2)<<" & "<<fib(size-3)<<endl;
            // ll fib[size];

            num = ((fib(size-2)*A[i])%mod+(fib(size-3)*B[j])%mod)%mod;

            // cout << num<<" c\n";

            here:

            result = (result+num)%mod;
        }
    }

    cout << result << endl;
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