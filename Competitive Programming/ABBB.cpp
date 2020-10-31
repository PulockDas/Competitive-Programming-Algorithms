#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 1000000007
#define loop(i, n) for(ll i=1; i<=n; i++)

typedef pair<ll, ll> pll;





void solve(ll test){
    string s;
    cin >> s;

    ll len = s.length();

    ll ans = 0;
    for(ll i=0; i<len; i++){
        if(ans && s[i]=='B'){
            ans--;
        }else{
            ans++;
        }
    }

    cout << ans <<endl;

    // here:
    // //delete all AB
    // string snew;
    // ll i=0, j=1, count=0;
    // ll len = s.length();

    // while(i<len && j<len){
    //     if(!(s[i]=='A' && s[j]=='B')){
    //         snew.push_back(s[i]);
    //         i++, j++;
    //     }else{
    //         count++;
    //         i+=2, j+=2;
    //     }
    // }

    // if(j==len){
    //     snew.push_back(s[i]);
    // }

    // if(count){
    //     s=snew;
    //     snew.clear();
    //     goto here;
    // }



    // here2:
    // //delete all AB
    // snew.clear();
    // i=0, j=1, count=0;
    // len = s.length();

    // while(i<len && j<len){
    //     if(!(s[i]=='B' && s[j]=='B')){
    //         snew.push_back(s[i]);
    //         i++, j++;
    //     }else{
    //         count++;
    //         i+=2, j+=2;
    //     }
    // }

    // if(j==len){
    //     snew.push_back(s[i]);
    // }

    // if(count){
    //     s=snew;
    //     // snew.clear();
    //     goto here2;
    // }


    // cout << snew.length()<<endl;
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