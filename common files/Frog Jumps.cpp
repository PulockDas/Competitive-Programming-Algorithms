#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int l = s.length();
        int suru = -1;

        vector<int> vec;
        for(int i=0; i<l; i++){
            if(s[i] == 'R'){
                vec.push_back(i-suru);
                suru = i;
            }
        }

        vec.push_back(l-suru);

        cout << *max_element(vec.begin(), vec.end())<<endl;

    }

    return 0;
}
