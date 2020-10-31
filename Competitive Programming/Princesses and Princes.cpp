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
        ll n;
        cin >> n;

        ll rajkonya = n;
        bool rajputro[n+1];
        memset(rajputro, 0, sizeof(rajputro));

        ll koster_rajkonya = -1;

        for (ll j=0; j<rajkonya; j++)
        {
            ll list_num, neya_hoy_nai = 0;
            cin >> list_num;

            while (list_num--)
            {
                ll input;
                cin >> input;

                if(!rajputro[input] && !neya_hoy_nai){
                    neya_hoy_nai = 1;
                    rajputro[input] = true;
                }
            }

            if(neya_hoy_nai == 0){
                koster_rajkonya = j+1;
            }
        }

        if(koster_rajkonya<0){
            cout << "OPTIMAL"<<endl;
            continue;
        }

        ll koster_rajputro;
        for(ll m=1; m<=n; m++){
            if(!rajputro[m]){
                koster_rajputro = m;
                break;
            }
        }

        cout << "IMPROVE\n"<<koster_rajkonya<<" "<<koster_rajputro<<endl; 
    }

    return 0;
}