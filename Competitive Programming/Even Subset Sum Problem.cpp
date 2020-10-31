#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)

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

        ll arr[n];
        ll ind = -1;

        for(ll i=0; i<n; i++){
            cin >> arr[i];
            if(arr[i]%2 == 0 && ind == -1)
                ind = i+1;
        }

        if(n==1){
            if(arr[0]%2 == 1){
                cout << -1<<endl;
            }
            else{
                cout <<1<<endl<< 1<<endl;
            }
            continue;
        }

        if(ind == -1){
            cout <<2<<endl<< 1 << ' '<<2<<endl;
        }
        else{
            cout <<1<<endl<< ind<<endl;
        }
    }

    return 0;
}