#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 998244353

typedef pair<ll, ll> pll;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;

    while (t--)
    {
        ll sum, total;
        cin >>sum >>total;

        if(sum<total){
            cout << "NO\n";
            continue;
        }

        vector <ll> ans;

        if(total % 2 == 1){
            if(sum % 2 == 0){//tt bijor, sum jor
                if(2*total > sum){
                    cout << "NO\n";
                    continue;
                }
                else{
                    for(ll i=1; i<total; i++)
                        ans.push_back(2);
                    ans.push_back(sum-2*(total-1));
                }
            }

            else{//tt bijor, sum bijor
                for(ll i=1; i<total; i++)
                        ans.push_back(1);
                    ans.push_back(sum-total+1);
            }
        }

        else{
            if(sum % 2 == 1){
                cout << "NO\n";
                continue;
            }
            else{
                for(ll i=1; i<total; i++)
                        ans.push_back(1);
                    ans.push_back(sum-total+1);
            }
        }

        ll len = ans.size();
        cout << "YES" << endl;

        for(ll i=0; i<len; i++)
            cout << ans[i]<<" ";
        cout << endl;
    }

    return 0;
}