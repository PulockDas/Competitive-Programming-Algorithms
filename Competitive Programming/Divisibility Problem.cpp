#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        double a, b;
        cin >> a>> b;

        int big = ceil(a/b);
        big *= b;
        // cout << big<<endl;

        cout << big-(int)a<<endl;
    }
    
    return 0;
}