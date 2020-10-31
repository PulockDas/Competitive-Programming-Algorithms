#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int x, y;

        cin >> x >> y;

        if(x>=y){
            cout << "YES\n";
            continue;
        }

        if(x==1){
            cout << "NO\n";
            continue;
        }

        if(x==2 && y!=3){
            cout << "NO\n";
            continue;
        }

        if(x==3 && y>3){
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
    }

    return 0;
}
