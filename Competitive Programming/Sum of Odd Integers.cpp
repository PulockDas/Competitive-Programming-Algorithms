#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;

    while(t--){
        ll n, k;
        cin >> n >> k;

        if(k*k > n){
            cout << "NO\n";
            continue;
        }

        if(n%2 == 0){
            if(k%2 == 0){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
                continue;
        }

        if(k%2 == 1){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}