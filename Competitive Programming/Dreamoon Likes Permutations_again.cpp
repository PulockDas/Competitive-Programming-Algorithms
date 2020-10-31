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

    while (t--)
    {
        ll n;
        cin >> n;

        ll arr[n];

        for(ll i=0; i<n; i++){
            cin >> arr[i];
        }

        ll max[n], revmax[n];

        memset(max, 0, sizeof(max));
        max[0] = arr[0];

        ll checkmax[n];
        memset(checkmax, 0, sizeof(checkmax));

        checkmax[arr[0]]++;

        for(ll i=1; i<n; i++){

            checkmax[arr[i]]++;

            if(checkmax[arr[i]]>1){
                break;
            }

            if(max[i-1] < arr[i]){
                max[i] = arr[i];
            }
            else{
                max[i] = max[i-1];
            }
        }

        memset(revmax, 0, sizeof(revmax));
        revmax[n-1] = arr[n-1];

        ll checkrevmax[n];
        memset(checkrevmax, 0, sizeof(checkrevmax));
        checkrevmax[arr[n-1]]++;

        for(ll i=n-2; i>-1; i--){
            checkrevmax[arr[i]]++;

            if(checkrevmax[arr[i]]>1){
                break;
            }

            if(revmax[i+1] < arr[i]){
                revmax[i] = arr[i];
            }
            else{
                revmax[i] = revmax[i+1];
            }
        }

        vector<pair<ll, ll>>ans;

        for(ll i=0; i<n; i++){
            if(max[i] == i+1 && revmax[i+1] == n-i-1){
                ans.push_back(make_pair(i+1, n-i-1));
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