#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int x, y, z, a;
    cin >> x >> y >> z >> a;

    int b = ((x^y) && (z||a)) ^ ((y&&z)||(x^a));

    cout << b <<endl;

    return 0;
}
