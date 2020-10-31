#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
    ll T;
    cin >> T;

    while(T--){
        ll g, l;
        cin >> g >> l;

        ll sm, gr;

        ll mul = g * l;

        bool ch = false;

        for(ll i=g; i*i<=mul; i++){

            if(mul % i == 0){
                sm = i;
                gr = mul / i;

                if(sm % g == 0 && gr % g == 0){
                    cout <<sm <<' '<<gr<<endl;
                    ch = true;
                    break;
                }
            }
        }

        if(ch == false)
            cout << -1 <<endl;
    }

    return 0;
}
