#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;

    while(q--){
        string s, t;
        cin >> s >> t;

        bool yes = false;

        int l = s.length();

        for(int i=0; i<l; i++){
            for(int j=0; j<l; j++){
                if(s[i] == t[j]){
                    yes = true;
                    goto here;
                }
            }
        }

        here:
        if(yes) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
