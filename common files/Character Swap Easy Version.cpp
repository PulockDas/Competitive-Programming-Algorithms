#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int k;
    cin >> k;

    while(k--){
        int n;
        cin >> n;

        string s, t;
        cin >> s >> t;

        vector<int > vec;
        for(int i=0; i<n; i++){
            if(s[i]!= t[i]){
                vec.push_back(i);
            }
        }

        if(vec.size()!= 2){
            cout << "NO"<<endl;
            continue;
        }

        if(s[vec[0]]==s[vec[1]] && t[vec[0]]==t[vec[1]]){
            cout << "YES"<<endl;
            continue;
        }

        cout << "NO"<<endl;

    }

    return 0;
}
