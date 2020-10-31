#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, x, y;
    cin >> n>> x>> y;

    int m = y;

    string s;
    cin >> s;

    int l = s.length(), ans = 0;

    for(int i = l-1, j=0; j<x; j++,i--){
        if(j != m){
            if(s[i] == '1')
                ans++;
        }
        else{
            if(s[i] == '0')
                ans++;
        }
    }

    cout << ans;

    return 0;
}
