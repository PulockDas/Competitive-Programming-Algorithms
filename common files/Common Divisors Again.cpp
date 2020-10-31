#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll gcd(ll a, ll b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;

    if (a == b)
        return a;

    if (a > b)
        return gcd(a%b, b);
    return gcd(a, b%a);
}

int main ()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    ll n;
    cin >> n;

    ll g = 0;

    for(ll i=0; i<n; i++){
        ll x;
        cin >> x;

        g = gcd(g, x);
    }

    ll s = 0;

    for(ll i=1; i*i <= g; i++){
        if(g % i == 0){
            if(g/i == i)
                s++;
            else
                s += 2;
        }
    }

    cout << s;

    return 0;
}
