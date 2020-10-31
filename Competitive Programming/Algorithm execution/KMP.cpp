#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 1000000007
#define loop(i, n) for(ll i=1; i<=n; i++)

typedef pair<ll, ll> pll;

ll failure_table[101];





void kmp(string mother, string pattern){
    ll m_len = mother.length();
    ll p_len = pattern.length();

    ll ans = 0;
    ll j=0, k=0;
    for(; j<m_len; ){
       
        for(; k<p_len && j<m_len; k++){
            if(mother[j]==pattern[k]){
                j++;
            }
            else{
                // j++;
                break;
            }
        }

        if(k==p_len){
            ans++;
        }

        if(!k){
            j++;
        }

        k = failure_table[k];
        
    }
    cout << ans<<endl;
    return;
}

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

void solve(ll test){
    string mother, pattern;

    cin >> mother >> pattern;

    making_failure_table(pattern);

    kmp(mother, pattern);
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