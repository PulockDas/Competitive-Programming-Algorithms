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
        cout << "Case " << i<<":\n";
        ll x1, y1, x2, y2;
        cin >> x1 >>y1 >>x2 >>y2;

        ll M;
        cin >> M;

        while (M--)
        {
            ll x, y;
            cin >> x >> y;

            if(((x>=x1) &&(x<=x2)) && ((y>=y1)&&(y<=y2))){
                cout << "Yes\n";
            }
            else{
                cout << "No\n";
            }
        }
    }

    return 0;
}
