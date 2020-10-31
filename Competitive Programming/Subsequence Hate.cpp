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

    while(t--){
        string s;
        cin >> s;

        ll ans;
        
        ll l = s.length(), n1=0;

        for(ll i=0; i<l; i++){
            if(s[i] == '1') n1++;
        }

        ll n0= l-n1;

        ans = min(n1, n0);
        // cout << ans << endl;

        ll arr1[l], arr0[l];

        if(s[0]=='1'){
            arr1[0]=0;
            arr0[0]=1;
        }
        else{
            arr1[0]=1;
            arr0[0]=0;
        }

        for(ll i=1; i<l; i++){
            if(s[i]=='0'){
                arr0[i]=arr0[i-1];
                arr1[i]=arr1[i-1]+1;
            }else{
                arr1[i]=arr1[i-1];
                arr0[i]=arr0[i-1]+1;
            }

            // cout << arr1[i]<<' '<<arr0[i]<<endl;
        }

        for(ll i=0; i<l; i++){
            // cout << "1 :"<<arr1[i]<<" "<<n0<<" "<<arr0[i]<<endl;
            // cout <<arr1[i]+n0-arr0[i]<<" ";
            // cout <<arr0[i]+n1-arr1[i]<<endl;
            if(ans > arr1[i]+n1-arr0[i]){
                ans = arr1[i]+n1-arr0[i];
            }
            
            if(ans > arr0[i]+n0-arr1[i]){
                ans = arr0[i]+n0-arr1[i];
            }

            // cout << ans << endl;
        }

        cout << ans << endl;
    }

    return 0;
}