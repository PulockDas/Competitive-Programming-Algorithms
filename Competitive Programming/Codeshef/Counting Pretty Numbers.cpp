#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 998244353

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;

    while(t--){
        ll l, r;
        cin >> l >> r;

        ll ans = 0;

        ll rmin = r/10;
        rmin *= 10;

        ll mid = rmin+1;
        while(mid <= r){
            if(mid >= l){
                if(mid-rmin == 2||mid-rmin == 3||mid-rmin == 9)
                    ans++;
            }
            
            mid++;
        }

        if(rmin <= l){
            cout << ans<<endl;
            continue;
        }

        ll lc = l;
        ll lmin = lc/10;
        lmin *= 10;

        while(lc % 10 != 0){
            if(lc-lmin==2||lc-lmin==3||lc-lmin==9)
                ans++;
            lc++;
        }

        ll ex10 = (rmin-lc)/10;

        cout << ans + ex10*3 <<endl;

    }

    return 0;
}