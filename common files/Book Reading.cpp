#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
    ll q;
    cin >> q;

    while(q--){
        ll n, m;
        cin >> n >> m;

        ll ans = 0, i;
        for(i=1;(i*m)%10!=0 ;i++){
            ans += (i*m)%10;
        }

        ll vag = i*m;
        ans = (n/vag) * ans;

        n %= vag;
        ll limit = n/m;

        for(i=1; i<=limit; i++){
            ans += (i*m)%10;
        }

        cout << ans <<endl;
    }

    return 0;
}
