#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
    int t;
    cin >> t;
    while(t--){
        ll n, s, t;
        cin >> n >> s >> t;

        cout << n + 1 - min(s, t) << endl;
    }

    return 0;
}
