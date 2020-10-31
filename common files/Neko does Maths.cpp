#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}

ll findlcm(ll a, ll b){
    return (a*b) / gcd(a,b);
}


int main ()
{
    ll a, b;
    cin >> a >> b;

    ll lcm;

    if(a > b)
        lcm = findlcm(a, b);
    else
        lcm = findlcm(b, a);

    ll gr = (a > b)? a : b;
    ll lo = (a < b)? a : b;

    if(lcm == gr){
        cout << 0;
        return 0;
    }

    ll n = gr/lo;

    ll ans=0;

    if(n == 1){
        float c = gr*1.0 - lo*1.0;
        cout << abs((ceil(gr/c) * c) - gr);
        return 0;
    }

    while(lo*n != gr){
        lo++;
        gr++;
        ans++;
    }

    cout << ans;

    return 0;

}
