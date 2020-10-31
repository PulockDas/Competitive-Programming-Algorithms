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
    while (t--)          //per test case
    {
        ll n;
        cin >> n;

        ll arr[n], check0[n+1];
        memset(check0, 0, sizeof(check0));

        for(ll i=0; i<n; i++){ //pura array input nilam
            cin >> arr[i];
            check0[arr[i]]++;
        }

        for(ll i=1; i<=n; i++){
            if(check0[i]>2){
                cout << "0\n";
                goto back;
            }
        }

        ll colored = 0, max = -1;
        ll check[n+1];
        memset(check, 0, sizeof(check));
        vector<pair<ll, ll>>ans;

        for(ll i=0; i<n; i++){              //array traversing
            check[arr[i]]++;
            if(check[arr[i]] > 1){
                break;
            }

            colored++;
            
            if(arr[i]>max){
                max = arr[i];
            }

            if(max == colored){
                ll baki = n-max;
                bool ch = true;

                for(ll j=1; j<=baki; j++){
                    if(check0[j]-check[j] != 1){
                        ch = false;
                        break;
                    }
                }

                if(ch)
                    ans.push_back(make_pair(max, n-max));
            }
        }

        ll l = ans.size();
        cout << l << endl;
        
        for(ll i=0; i<l; i++){
            cout << ans[i].first << " " << ans[i].second<<endl;
        }
    }
    
    return 0;
}