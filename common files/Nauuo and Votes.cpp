#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int x, y, z;
    cin >> x >> y >> z;

    x -= y;

    if(x == 0){
        if(z != 0) cout << '?';

        else cout << '0';
    }

    else if(x > 0){
        x -= z;
        if(x > 0)
            cout << '+';
        else
            cout << '?';
    }

    else{
        x += z;
        if(x < 0)
            cout << '-';
        else
            cout << '?';
    }

        return 0;
}
