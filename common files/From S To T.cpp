#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int q;
    cin >> q;

    string s, t, p;

    suru:
    while(q--){
        cin >> s >> t >> p;
        vector <int > pos;
        int sl = s.length();
        int tl = t.length();

        if(sl > tl){
            cout <<"NO"<<endl;
            continue;
        }

        int j = 0;
        for(int i=0; i<sl; i++,j++){

            if(j>=tl){
                cout <<"NO"<<endl;
                goto suru;
            }

            for(; j<tl; j++){
                if(s[i] == t[j])
                    break;

                pos.push_back(j);
            }

            if(j==tl){
                cout <<"NO"<<endl;
                goto suru;
            }

        }

        //cout << j <<endl;
        for(; j<tl; j++)
            pos.push_back(j);
        //cout << pos.size()<<endl;

        int i;
        for(i=0; i<pos.size(); i++){
            char c = t[pos[i]];
            int pl = p.length();

            int k;
            for(k=0; k<pl; k++){
                if(p[k] == c){
                    p.erase(p.begin()+k);
                    break;
                }
            }

            if(k == pl){
                cout <<"NO"<<endl;
                goto suru;
            }
        }

        cout <<"YES"<<endl;
    }

    return 0;
}
