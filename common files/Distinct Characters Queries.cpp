#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    vector <set <int > > poss(26);

    int l = s.length();

    for(int i=0; i<l; i++){
        int p = s[i] - 'a';
        poss[p].insert(i);
    }

    int q;
    cin >> q;

    while(q--){
        int tp;
        cin >> tp;

        if(tp == 1){
            int pos;
            char c;

            cin >> pos >> c;

            pos--;

            int p = s[pos]- 'a';
            poss[p].erase(pos);

            s[pos] = c;
            p = c - 'a';
            poss[p].insert(pos);
        }

        else{
            int l, r;
            cin >> l >> r;

            l--, r--;

            int ct = 0;
            for(int i=0; i<26; i++){
                auto it = poss[i].lower_bound(l);

                if(it != poss[i].end() && *it <= r){
                    ct++;
                }
            }

            cout << ct << endl;
        }

    }

    return 0;
}

//Inspired by the soution
