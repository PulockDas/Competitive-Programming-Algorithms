#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <iostream>
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





map<ll, ll> sieve(ll n){
    map<ll, ll> m;

    ll count =0;

    while(n%2==0){
        count++;
        n/=2;
    }

    if(count)
        m[2]=count;

    for(ll i=3; i*i<=n; i+=2){
        count=0;

        while(n%i == 0){
            count++;
            n/=i;
        }

        m[i] = count;
    }

    if(n>2){
        m[n] = 1;
    }

    return m;
}






void solve(ll test){
    ll p, q;
    cin >> p >>q;

    if(p%q != 0){
        cout << p<<endl;
        return;
    }

    ll q_temp = q;

    
    vector<ll> q_factor;
    vector<ll> contribution;

    while(q%2==0){
        q/=2;
    }

    if(q_temp!=q){
        q_factor.push_back(2);
        contribution.push_back(q_temp/q);
    }

    for(ll i=3; i*i<=q; i++){
        if(q%i == 0){
            q_factor.push_back(i);
            q_temp = q;

            while (q%i==0) {
                q/=i;
            }

            contribution.push_back(q_temp/q);
        }
    }

    if(q>1){
        q_factor.push_back(q);
        contribution.push_back(q);
    }


    ll x=0;

    for(ll i=0; i<q_factor.size(); i++){
        ll x_temp = p;

        while(x_temp%q_factor[i]==0){
            x_temp /= q_factor[i];
        }

        // cout << x_temp<<"after div\n";
        // cout<<contribution[i]<<"      "<< q_factor[i]<<endl;

        x_temp *= (contribution[i]/q_factor[i]);

        x = max(x_temp, x);

    }

    cout << x << endl;

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