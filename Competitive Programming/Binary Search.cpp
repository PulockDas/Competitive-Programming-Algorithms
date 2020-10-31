#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 1000000007
#define loop(i, n) for(ll i=1; i<=n; i++)

typedef pair<ll, ll> pll;






void solve(ll test){
    
    ll x, n, pos;
    cin >> n>>x>>pos;

    ll left = 0, right = n, left_pos=-1, right_pos=0;

    ll count=0;
    while(left<right){

        count++;

        ll mid = (left+right)/2;

        if(mid<=pos){
            left=mid+1;
            left_pos++;
        }else{
            right = mid;
            right_pos++;
        }
        // cout << mid<<endl;
    }

    ll chotonum=x-1;
    ll boronum = n-x;

    if(chotonum<left_pos || boronum<right_pos){
        cout << 0<<endl;
        return;
    }

    ll ans=1;

    for(ll i=0; i<left_pos; i++){
        ans = (ans*chotonum)%mod;

        chotonum--;
    }
    
    
    for(ll i=0; i<right_pos; i++){
        ans = (ans*boronum)%mod;

        boronum--;
    }

    ll baki = n-count;

    for(ll i=2; i<=baki; i++){
        ans = (ans*i)%mod;
    }

    cout << ans <<endl;



    // cout << ans<<endl;

    // ll s=1;
    // for(ll i=2; i<117; i++){
    //     s=(s*i)%mod;
    // }

    // cout << s;

    
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll test=1;
    // cin >> test;

    loop(i, test){
        solve(i);
    }

    return 0;
}