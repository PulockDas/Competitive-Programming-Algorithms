#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 1000000007
#define loop(i, n) for(ll i=1; i<=n; i++)

typedef pair<ll, ll> pll;


void solve(ll test){
    ll len;
    cin >> len;

    string s;
    cin >> s;

    queue <pll> vec;

    for(ll i=0; i<len; ){
        ll j = i+1;
        //  num = 1;

        while(j<len){
            if(s[i]==s[j]){
                // num++;
                j++;
            }
            else{
                break;
            }
        }

        pll p;
        if(i!=j-1){
            p = make_pair (i, j-1);
            vec.push(p);
        }    
        i = j;
    }

    // if(s[len-1]!=s[len-2]){
    //     vec.push_back(1);
    // }

    ll ans = 0;
    // ll kache = 0;

    for(ll i=0; i<len; i++){
        ans++;
        // cout <<"i "<<i<<endl;

        if(!vec.empty()){
            ll suru = vec.front().first;
            ll sesh = vec.front().second;

            if(i<=sesh && i>=suru){
                i = sesh;
                // cout <<"sesh "<< sesh<<endl;
                vec.pop();
            }

            else{
                if(sesh-suru==1){
                    vec.pop();
                    i++;
                }

                else{
                    vec.front().first=suru+1;
                    i++;
                }
            }
        }

        else{
            i++;
        }
    }

    cout << ans << endl;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll test;
    cin >> test;

    loop(i, test){
        solve(i);
    }

    return 0;
}