#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;

    cin >> t;

    while(t--){
        ll x, y;
        cin >> x >> y;

        ll besi = x - y;

        if(besi == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}
