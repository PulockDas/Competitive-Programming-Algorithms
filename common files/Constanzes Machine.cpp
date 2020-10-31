#include <bits/stdc++.h>
using namespace std;
#define mx 1000000007
#define ll long long

int main ()
{
    string s;
    cin >> s;

    ll l = s.length();

    for(ll i=0; i<l; i++){
        if(s[i] == 'w' || s[i] == 'm'){
            cout << 0;
            return 0;
        }
    }

    ll dp[l+1];

    dp[0] = dp[1] = 1;

    for(ll i=2; i<=l; i++){
        dp[i] = dp[i-1];

        if(s[i-1]==s[i-2] && (s[i-1]=='u' || s[i-1]=='n')){
            dp[i] = (dp[i] + dp[i-2]) % mx;
        }

    }

    cout << dp[l];

    return 0;
}

// The code is not self-made.
//Somewhat like copy-paste
