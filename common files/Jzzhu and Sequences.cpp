#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mx = 1e9 + 7;

int main ()
{
    ll f1, f2, fn;
    cin >> f1 >> f2 >> fn;

    fn = fn % 6;

    if(fn == 1)
        fn = f1;

    else if(fn == 2)
        fn = f2;

    else if(fn == 3)
        fn = (f2 % mx) - (f1 % mx);

    else if(fn == 4)
        fn = -f1;

    else if(fn == 5)
        fn = -f2;

    else if(fn == 0)
        fn = (f1 % mx) - (f2 % mx);

    if (fn >= 0)
        cout << fn % mx;

    else{
        fn = -fn % mx;
        if(fn == 0)
            cout << fn;
        else
            cout << mx - fn;
    }

    return 0;
}
