#include <bits/stdc++.h>
using namespace std;
#define pcc pair<char, char>

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int k;
    cin >> k;

    baire:
    while(k--){
        int n;
        cin >> n;

        string s, t;
        cin >> s >> t;

        map<pcc, vector<int> >m;

        int pos=0;
        for(int i=0; i<n; i++){
            if(s[i]!=t[i]){
                m[make_pair(s[i], t[i])].push_back(i);
                pos++;
            }
        }

        if(pos%2 == 1){
            cout << "NO"<<endl;
            continue;
        }

        for(auto x: m){
            if(x.second.size() % 2 == 1){
                cout << "NO"<<endl;
                goto baire;
            }
        }

        cout << "YES"<<endl<< pos/2<<endl;
        for(auto x: m){
            for(int i=0; i<x.second.size(); i++){
                cout << x.second[i]+1<<" ";
            }
        }
        cout << endl;
    }

    return 0;
}
