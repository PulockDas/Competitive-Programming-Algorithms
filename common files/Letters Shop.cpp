#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    string s;

    cin >> n >> s;

    vector <int > alpha[26];

    for(int i=0; i<n; i++){
        int man = s[i] - 'a';
        alpha[man].push_back(i);
    }

    int m;
    string t;
    cin >> m;

    while(m--){
        cin >> t;

        vector <int > alpha2[26];

        for(int i=0; i<26; i++)
            alpha2[i] = alpha[i];

        int l = t.length();
        int les = -1;

        for(int i=0; i<l; i++){
            int mann = t[i] - 'a';

            if(les < alpha2[mann][0])
                les = alpha2[mann][0];

            alpha2[mann].erase(alpha2[mann].begin()+0);
        }
        for(int i=0; i<26; i++)
            alpha2[i].clear();

        cout << les+1 <<endl;

    }

    return 0;
}
