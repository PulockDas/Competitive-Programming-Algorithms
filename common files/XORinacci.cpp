#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;

    while(t--){
        int a, b, n;
        cin >> a >> b >> n;
        n++;

        int c = a ^ b;
        //cout << c <<endl;

        int m = n % 3;

        if(m == 0) cout << c;
        else if(m == 1) cout << a;
        else cout << b;

        cout << endl;
    }

    return 0;
}
