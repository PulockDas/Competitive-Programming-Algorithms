#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;

    int col = sqrt(n);

    int row = n/col;

    int ans = 2*row + 2*col;

    if(n%col != 0) cout << ans + 2;

    else
        cout << ans <<endl;

    return 0;
}
