#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector <ll> failure_table;

void creation_failure_table(string pattern, ll m){
    failure_table.push_back(0);
    failure_table.push_back(0);

    // now creating the table from length 2->m

    for(ll i=2; i<=m; i++){

        // previous failure index er man j te thakbe
        ll j = failure_table[i-1];

        while(1){
            if(pattern[j] == pattern[i-1]){
                failure_table.push_back(j+1);
                break;
            }

            // if we couldn't find a match from previous
            if(j == 0){
                failure_table.push_back(0);
                break;
            } 
            else{
                j = failure_table[j];
            }
        }
    }
}

void countfreq(string text, string pattern){

    ll n = text.length();
    ll m = pattern.length();

    failure_table.clear();

    creation_failure_table(pattern, m);

    ll j=0, i=0, count=0;
    // j for text and i for pattern matching automation

    while(1){
        if(j == n){
            cout << count << endl;
            return;
        }

        if(text[j] == pattern[i]){
            i++;
            j++;
            if(i == m){
                count++;
                i = failure_table[i];
            }
        }

        else{
            if(i==0){
                j++;
            }

            else{
                i = failure_table[i];
            }
        }

    }
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;

    for (ll i = 1; i <= t; i++)
    {
        string text, pattern;
        cin >> text >> pattern;

        cout << "Case "<<i<<": ";
        countfreq(text, pattern);
    }
    
    return 0;
}