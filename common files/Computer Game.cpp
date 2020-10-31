#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main (){
    int q;
    cin >> q;

    ll k, n, a, b;
    while(q--){
        cin >> k >> n >> a >> b;

        k -= n*a;

        if(k > 0){
            cout << n <<endl;
            continue;
        }

        else{
            k = -k;
            k++;

            ll dif = a - b;
            ll turns = (k+dif-1) / dif;

            if(turns > n)
                cout << -1;
            else
                cout << n-turns;

            cout << endl;
        }
    }

    return 0;
}
