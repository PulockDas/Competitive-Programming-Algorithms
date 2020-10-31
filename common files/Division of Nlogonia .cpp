#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int k;

    int n, m;

    while(1){
        cin >> k;
        if(k == 0)
            return 0;

        cin >> n >> m;

        int x, y;

        while(k--){
            cin >> x >> y;
            x -= n;
            y -= m;

            if(x == 0 || y == 0)
                cout << "divisa";
            else if(x > 0 && y > 0)
                cout << "NE";
            else if(x < 0 && y < 0)
                cout << "SO";
            else if(x > 0 && y < 0)
                cout << "SE";
            else
                cout << "NO";

            cout << endl;

        }
    }

    return 0;
}
