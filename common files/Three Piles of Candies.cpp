#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
    ll q;
    cin >> q;

    ll a, b, c;

    while(q--){
        cin >> a >> b >> c;
        cout << (a+b+c) / 2 << endl;
    }

    return 0;
}
