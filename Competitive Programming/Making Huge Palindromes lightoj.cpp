#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 1000000007
#define loop(i, n) for(ll i=1; i<=n; i++)

typedef pair<ll, ll> pll;

vector<ll> failure_table;


void making_failure_table(string pattern){
    ll len = pattern.length();

    for(ll i=2; i<=len; i++){

        ll ager = failure_table[i-1];

        while(1){

            if(pattern[i-1]==pattern[ager]){
                failure_table[i] = ager+1;
                break;
            }

            else if(!ager){
                failure_table[i] = 0;
                break;
            }

            else{
                ager = failure_table[ager];
            }
        }
    }
}



ll test(string text){
    ll len = text.length();

    char last = text[len-1];

    string temp;

    ll i;
    for(i=0; i<len; i++){
        if(text[i]==last){
            temp = text.substr(i, len-i);
            break;
        }
    }

    if(i==len){
        return 2*len-1;
    }

    failure_table.clear();
    making_failure_table(temp);


    ll j;
    for(j=len-1; i<j; j--, i++){
        if(temp[i]!=temp[j]){

            ll ind = len-j;
            j = failure_table[ind];

        }

        if(i==j){
            return 
        }


    }
    


}



void solve(ll test){
    string text;
    cin >> text;


    cout << test(text);

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