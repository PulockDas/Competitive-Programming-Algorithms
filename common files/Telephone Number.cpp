#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t, n;
    cin >> t;
    string s;

    here:
    while(t--){
        cin >> n >> s;

        if(n < 11){
            cout << "NO" << endl;
            goto here;
        }

        bool c = false;

        for(int i=n-11; i>-1; i--){
            if(s[i] == '8'){
                c = true;
                break;
            }
        }

        if(!c){
            cout << "NO" << endl;
            goto here;
        }

        cout << "Yes" << endl;

    }

    return 0;
}
