#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
    int q;
    cin >> q;

    ll n;

    while(q--){
        cin >> n;
        ll c = 0;

        while(n%2 == 0){
            n /= 2;
            c++;
        }

        while(n%3 == 0){
            n /= 3;
            c += 2;
        }

        while(n%5 == 0){
            n /= 5;
            c += 3;
        }

        if(n == 1)
            cout << c << endl;
        else
            cout << -1 << endl;

    }

    return 0;
}
