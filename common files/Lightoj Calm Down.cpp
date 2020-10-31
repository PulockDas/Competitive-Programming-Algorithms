#include <bits/stdc++.h>
using namespace std;
#define pi acos(-1)
#define db double

int main ()
{
    int t;
    cin >> t;

    for(int i=1; i<=t; i++){
        db R, n;
        cin >> R >> n;

        db theta = pi/n;

        db r = R * sin(theta);
        r /= 1+sin(theta);

        printf("Case %d: %.7lf\n", i, r);
    }

    return 0;
}
