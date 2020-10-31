#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string t;
    cin >> t;

    int ind=0, l=t.length();

    for(int i=0; i<l; i++){
        if(t[i] == 'a')
            ind = i;
    }

    string fs = t.substr(0, ind+1);
    string ss = t.substr(ind+1, l-ind-1);

    fs.erase(remove(fs.begin(), fs.end(), 'a'), fs.end());

    int l1 = fs.length(), l2 = ss.length();

    if(l1 > l2)
        cout << ":(";

    else if(l1 == l2){
        if(fs == ss){
            for(int i=0; i<=ind; i++)
                cout << t[i];
        }

        else
            cout << ":(";
    }

    else{
        int len = l1 + l2;

        if(len % 2 != 0)
            cout << ":(";

        else{
            len /= 2;
            len -= l1;

            for(int i=0; i<len; i++){
                fs = fs + ss[i];
                ss = ss.erase(0, 1);
            }

            if(ss == fs){
                len += l1;
                len = l - len;
                for(int i=0; i<len; i++)
                    cout <<t[i];
            }

            else
                cout << ":(";
        }
    }

    return 0;
}
