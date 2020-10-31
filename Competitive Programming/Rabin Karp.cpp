#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll Hash(string &s, ll M, ll B, ll m){
    
    ll h = 0, power = 1;
    for(ll i = m-1; i>-1; i--){
        h += (s[i]*power)%M;
        h %= M;
        power = (power*B)%M;
    }

    return h;
}

ll match(string &text, string &pattern){
    ll n = text.size();
    ll m = pattern.size();
    
    if(m>n){
        return -1;
    }

    if(m == 0 || n == 0){
        return -1;
    }

    ll M = 1000000000+7;
    ll B = 347;

    ll hashText = Hash(text, M, B, m);
    ll hashPattern = Hash(pattern, M, B, m);

    if(hashPattern == hashText)
        return 0;
    
    ll power = 1;
    for(ll i=1; i<m; i++){
        power = (power * B)%M;
    }

    for(ll i=m; i<n; i++){
        hashText = (hashText-(text[i-m]*power)%M)%M;
        hashText = (hashText+M)%M;

        hashText = (hashText*B)%M;
        hashText = (hashText+text[i])%M;

        if(hashText == hashPattern)
            return i-m+1;
    }

    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string text = "Hello World!";
    string pattern = "World";

    cout << "The index of matching is:\n"<<match(text, pattern);

    return 0;
}
