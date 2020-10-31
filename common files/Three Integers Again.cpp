#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
    int q;
    cin >> q;

    while(q--){
        ll x, y;
        cin >> x >> y;

        ll ma = max(x, y);
        ll mi = min(x, y);

        mi--;

        ma = ma - mi;

        cout << ma << ' '<< mi << ' '<< 1 << endl;

    }
    return 0;
}
