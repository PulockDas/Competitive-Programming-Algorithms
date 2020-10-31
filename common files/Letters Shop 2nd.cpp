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

        int alpha2[26];

        for(int i=0; i<26; i++)
            alpha2[i] = 0;

        int l = t.length();

        for(int i=0; i<l; i++){
            int mann = t[i] - 'a';
            alpha2[mann]++;
        }

        int les = -1;
        for(int i=0; i<26; i++){
            if(alpha2[i] > 0){
                if(les < alpha[i][alpha2[i]-1])
                    les = alpha[i][alpha2[i]-1];
            }
        }

        cout << les + 1 << endl;
    }

    return 0;
}
