#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    while(q--){
        int a, b, n, s;
        cin >> a >> b >> n >> s;

        int r = s/n;

        if(r > a) r = a;

        r = r*n;

        r = s-r;

        if(r <= b) cout << "YES";
        else cout << "NO";

        cout << endl;
    }

    return 0;
}
