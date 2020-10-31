#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 998244353

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll x;
    db y;
    cin >> x >> y;

    if(x % 5 != 0 || y==0){
        cout <<fixed<<setprecision(2)<< y <<endl;
        return 0;
    }

    if(y<(db)x+0.5){
        cout << fixed<<setprecision(2)<< y <<endl;
        return 0;
    }

    cout << fixed<<setprecision(2)<< y-(db)x-0.5 <<endl; 

    return 0;
}