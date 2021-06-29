#include <algorithm>
#include <bits/stdc++.h>
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

#define max 1000000000000000000

vector<ll> vec;

void push(){

    vec.push_back(1);

    ll i=1;
    ll ager = 1;
    while(1){

        ll p= power(2, i);

        ager = power(p, 2)+ager*2;

        if(ager>max){
            break;
        }
        vec.push_back(ager);

        i++;

    }
}


void solve(ll test){
    ll n;
    cin >> n;

    // vector<ll>::iterator lower;
    // lower = lower_bound(vec.begin(), vec.end(), n);

    ll i;
    ll sum = 0;
    for(i=0; i<vec.size(); i++){
        sum+=vec[i];

        if(sum>n){
            break;
        }
    }

    cout << i<<endl;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    push();

    // for(ll i=0; i<vec.size(); i++)
    //     cout<<vec[i]<< ' ';
    // cout<<endl;

    ll test;
    cin >> test;

    loop(i, 1, test){
        solve(i);
    }

    return 0;
}