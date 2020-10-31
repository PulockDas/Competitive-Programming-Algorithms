#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check_palindrome(string temp){
    for(ll i=0, j=temp.length()-1; i<j; i++,j--){
        if(temp[i] != temp[j])
            return false;
    }

    return true;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;

    for(ll i=1; i<=t; i++){
        string s;
        cin >> s;

        ll l = s.length();
        for(ll j=0; j<l; j++){
            string temp = s.substr(j, l-j);

            if(check_palindrome(temp)){
                cout <<"Case "<<i<<": "<< j+l << endl;
                break;
            }
        }
    }

    return 0;
}