#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
    ll n;
    cin >> n;

    if(n%2 == 0){
        ll a = pow(2, n/2);
        cout << a;
    }
    else
        cout << 0;

    return 0;
}
