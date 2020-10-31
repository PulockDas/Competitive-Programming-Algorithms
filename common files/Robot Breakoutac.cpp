#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int q; cin >> q;
    while(q--){
        int n; cin >> n;
        int l = -1e5, r = 1e5, u = 1e5, d = -1e5;

        while(n--){
            int x, y, f1, f2, f3, f4;
            cin >> x >> y >> f1 >> f2 >> f3 >> f4;

            if(f1 == 0) l = max(l, x);
            if(f3 == 0) r = min(r, x);
            if(f2 == 0) u = min(u, y);
            if(f4 == 0) d = max(d, y);
        }

        if(r < l || u < d)
            cout << 0 <<endl;

        else cout << 1 <<' '<< l <<' '<< d <<endl;

    }

    return 0;
}
