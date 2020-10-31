#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main ()
{
    ll t;
    cin >> t;

    for(ll i=1; i<=t; i++){

        ll count = 1;
        ll n, digit;
        cin >> n >> digit;
        ll d = digit;

        while(d % n != 0){
            count++;
            d = (d*10 + digit) % n;
        }

        cout << "Case "<<i<<": "<<count<<endl;
    }

    return 0;
}
