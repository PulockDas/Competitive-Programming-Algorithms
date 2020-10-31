#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long

bool po(ll w){
    return (ceil(log2(w))== floor(log2(w)));
}

int main ()
{
    ll t, i=1;
    cin >> t;

    here:
    for(; i<=t; i++){
        ll w;
        cin >> w;

        if(w % 2 ==1 || po(w)){
            cout << "Case "<<i<< ": Impossible\n";
            continue;
        }

        ll n, m;

        for(ll j=2; j*j <= w; j++){

            if(w % j == 0){

                ll k = w/j;
                if(j%2==0 && k%2==1){
                    cout << "Case "<<i<<": "<<k<<" "<<j<<endl;
                    i++;
                    goto here;
                }

                if(j%2==1 && k%2==0){
                    n = j, m = k;
                }

            }
        }

        cout << "Case "<<i<<": "<<n<<" "<<m<<endl;
    }

    return 0;
}
