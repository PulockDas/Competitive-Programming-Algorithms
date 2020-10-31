#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int a0 = 0, a1 = 0;

    for(int i=0; i<n; i++){
        if(s[i] == '1') a1++;
        else a0++;
    }

    if(a0 != a1){
        cout << 1 << endl << s;
        return 0;
    }

    cout << 2 << endl << s[0] << ' ';
    s.erase(s.begin()+0);
    cout << s;

    return 0;
}
