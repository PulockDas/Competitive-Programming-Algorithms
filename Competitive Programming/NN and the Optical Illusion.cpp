#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    db n, r;
    cin >> n >> r;

    cout <<fixed<<setprecision(7)<< (r*sin(pi/n))/(1-sin(pi/n))<<endl;

    return 0;
}