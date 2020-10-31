#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 998244353

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll ans = 0;

    ll n;
    cin >> n;

    while(n--){
        ll input;
        cin >> input;

        if(input%2 == 0){
            while(input%2==0){
                ans ++;
                input /= 2;
            }
        }
    }

    cout << ans <<endl;

    return 0;
}