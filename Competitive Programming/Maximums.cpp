#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;

    int b[n];
    for(int i=0; i<n; i++) cin >> b[i];

    int x[n];
    x[0] = 0;

    int a[n];
    a[0] = b[0]+x[0];
    int ma = a[0];
    cout << a[0]<<" ";

    for(int i=1; i<n; i++){
        ma = max(ma, a[i-1]);
        a[i] = b[i] + ma;
        cout << a[i]<<" ";
    }

    cout << endl;

    return 0;
}