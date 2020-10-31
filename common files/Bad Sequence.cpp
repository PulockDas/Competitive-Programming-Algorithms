#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int soja=0, beka=0;

    for(int i=0; i<n; i++){
        if(s[i] == '(') soja++;
        else soja--;

        beka = min(beka, soja);
    }

    (soja == 0 && beka >= -1) ? cout << "Yes" : cout << "NO";

    return 0;
}
