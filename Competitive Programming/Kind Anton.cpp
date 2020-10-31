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

    ll t;
    cin >> t;

    here:
    while(t--){
        ll n;
        cin >> n;

        ll arr[n];
        ll check[n];
        memset(check, 0, sizeof(check));
        ll check2[n];
        memset(check2, 0, sizeof(check2));
        bool ageplus = 0, ageminus = 0;

        cin >> arr[0];
        if(arr[0]>0)
            ageplus = 1;
        else if(arr[0]<0)
            ageminus = 1;

        for(ll i=1; i<n; i++){
            cin >> arr[i];

            if(ageplus == 1){
                check[i] = 1;
            }
            if(ageminus == 1){
                check2[i] = 1;
            }

            if(arr[i]>0)
                ageplus = 1;
            else if(arr[i]<0)
                ageminus = 1;
        }

        ll arr2[n];
        for(ll i=0; i<n; i++){
            cin >> arr2[i];
        }

        if(arr2[0] != arr[0]){
            cout << "NO"<<endl;
            goto here;
        }

        for(ll i=1; i<n; i++){
            if(arr[i]<arr2[i]){
                if(check[i]==0){
                    cout << "NO"<<endl;
                    goto here;
                }
            }
            else if(arr[i]>arr2[i]){
                if(check2[i]==0){
                    cout << "NO"<<endl;
                    goto here;
                }
            }
        }

        cout << "YES"<<endl;
    }

    return 0;
}