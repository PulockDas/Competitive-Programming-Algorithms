#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 1000000007
#define loop(i, n) for(ll i=1; i<=n; i++)

typedef pair<ll, ll> pll;





void solve(ll test){
    ll x1, y1, x2, y2;

    cin >> x1 >> y1>>x2>>y2;

    if(x1==x2){
        cout << abs(y2-y1)<<endl;
        return;
    }

    if(y1==y2){
        cout << abs(x1-x2)<<endl;
        return;
    }

    cout << abs(x1-x2)+abs(y1-y2)+2<<endl;
    return;
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