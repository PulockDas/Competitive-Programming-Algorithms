#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    string s;
    cin >> n >> s;

    int c = 0, xc = 0;

    for(int i=0; i<n; i++){
        if(s[i] == 'x'){
            xc++;

            if(xc > 2)
                c++;
        }

        else
            xc = 0;
    }

    cout << c;

    return 0;
}
