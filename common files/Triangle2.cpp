#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int a[3];

    cin >> a[0] >> a[1] >> a[2];

    sort(a, a+3);

    if(a[0] == a[1] && a[1] == a[2])
        cout << "Equilateral Triangle" << endl;

    else if(a[0] == a[1] || a[1] == a[2])
        cout << "Isosceles Triangle" << endl;

    else
        cout << "Bad Triangle" << endl;

    return 0;
}
