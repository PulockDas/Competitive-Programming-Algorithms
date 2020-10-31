#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string s;
    cin >> s;

    int l = s.length(), numa = 0;

    for(int i=0; i<l; i++){
        if(s[i] == 'a')
            numa++;
    }

    if(numa*2-1 <= l)
        cout << numa*2-1;

    else
        cout << l;

    return 0;
}
