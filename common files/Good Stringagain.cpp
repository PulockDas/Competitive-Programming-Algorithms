#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int ans=0;
    for(int i=0; i<s.length(); ){
        if(s[i] == s[i+1]){
            s.erase(i, 1);
            ans++;
        }

        else
            i+=2;
    }

    int l = s.length();
    if(l %2 == 1){
        ans++;
        s.erase(l-1, 1);
    }

    cout << ans << endl << s;

    return 0;
}
