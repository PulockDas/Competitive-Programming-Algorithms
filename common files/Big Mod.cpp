#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll M = 1e9+7;

ll Bigmod(ll a, ll b, ll M){
    if(b == 0)
        return 1%M;

    ll x = Bigmod(a, b/2, M);
    x = (x * x) % M;

    if(b % 2 == 1)
        x = (x * (a % M)) % M;

    return x;
}

int main ()
{
    cout << "Enter your base and power:\n";
    ll a, b;
    cin >> a >> b;

    cout << "Your bigmod answer is :\n" << Bigmod(a, b, M);

    return 0;
}
