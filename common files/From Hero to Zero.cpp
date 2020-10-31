#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{

    int t;
    cin >> t;

    ll n, k;
    while(t--){

        cin >> n >> k;
        ll co = 0;

        while(n){
            co += n % k + 1;
            n /= k;
        }

        cout << --co << endl;

    }

    return 0;
}
