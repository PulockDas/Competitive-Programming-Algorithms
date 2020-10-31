#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;

    for(ll i=1; i<=t; i++){
        db r;
        cin >> r;

        cout<<"Case "<<i<<": " << fixed << setprecision(2)<< r*r*(4 - pi) << endl;
    }

    return 0;
}