#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 998244353
#define loop(i, n) for(ll i=1; i<=n; i++)

typedef pair<ll, ll> pll;

ll power(ll base, ll pow){
    ll ans = 1;

    while(pow != 1){
        if(pow % 2 == 1){
            ans *= base;
        }

        pow /= 2;

        base = base*base;
    }

    return ans*base;
}

void solve(ll test){
    ll ts;
    cin >> ts;
    ll temp = ts;

    ll man=0;

    if(ts % 2 == 1){
        cout << (ts-1)/2<<endl;
        return;
    }

    while(ts%2 == 0){
        ts /= 2;
        man++;
    }

    ll man2 = power(2, (man+1));
    
    cout << temp/man2<<endl;
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