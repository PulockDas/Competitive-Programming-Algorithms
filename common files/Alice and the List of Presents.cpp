#include <bits/stdc++.h>
using namespace std;
#define mx 1000000007
#define ll long long

ll poww(ll a, ll n){
    if(!n) return 1;

    ll mul  = 1;

    while(n){
        if(n % 2)
            mul = (mul * a) % mx;

        a = (a*a) % mx;
        n /= 2;
    }

    return mul;
}

int main ()
{
    ll n, m;
    cin >> n >> m;

    cout << poww((poww(2, m) - 1), n) << endl;

    return 0;
}
