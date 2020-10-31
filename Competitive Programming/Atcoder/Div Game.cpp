#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 1000000007
#define loop(i, n) for(ll i=1; i<=n; i++)

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

void prime_factor(ll n){//using sieve
    vector<ll> freq_factors;

    ll count=0;
    while(n%2 == 0){
        n/=2;
        count++;
    }
    freq_factors.push_back(count);

    for(ll i=3; i*i<=n; i+=2){
        count = 0;

        while(n%i == 0){
            count++;
            n/=i;
        }
        freq_factors.push_back(count);
    }

    if(n>1){
        freq_factors.push_back(1);
    }

    ll ans = 0;
    for(ll i=0; i<freq_factors.size(); i++){
        db num = (db)freq_factors[i];

        ll num2 = (-1+sqrt(1+8*num))/2;
        // cout << num2<<endl;
        ans+=num2;
    }

    cout << ans<<endl;
}




void solve(ll test){
    ll n;
    cin >> n;

    prime_factor(n);
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll test=1;
    // cin >> test;

    loop(i, test){
        solve(i);
    }

    return 0;
}