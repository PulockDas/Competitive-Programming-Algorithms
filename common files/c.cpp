#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
    ll n;
    cin >> n;
    ll num = n;

    set<ll > s;

    while (n % 2 == 0)
    {
        s.insert(2);
        n = n/2;
    }

    for (ll i = 3; i*i <= n; i = i + 2)
    {
        while (n % i == 0)
        {
            s.insert(i);
            n = n/i;
        }
    }

    if (n > 2)
        s.insert(n);

    if(s.size() == 0) cout << num <<endl;
    else if(s.size() == 1) cout << *s.begin() <<endl;
    else cout << 1 <<endl;

    return 0;
}
