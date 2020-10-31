#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, k;
    cin >> n >>k;

    int m = min(n-k, k-1);
    cout << 3*n+m;

    return 0;
}
