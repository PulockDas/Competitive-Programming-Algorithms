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

    back:
    while(t--){
        ll n, x;
        cin >> n >> x;

        ll check[201];
        memset(check, 0, sizeof(check));

        for(ll i=0; i<n; i++){
            ll input;
            cin >> input;

            check[input] = 1;
        }

        for(ll i=1, j=0; i<=200 && j<x; i++){
            if(check[i] == 0){
                check[i] = 1;
                j++;
            }
        }

        ll i;
        for(i=1; i<=200; i++){
            if(check[i] == 0){
                cout << i-1<<endl;
                goto back;
            }
        }

        cout << i-1 << endl;
    }

    return 0;
}