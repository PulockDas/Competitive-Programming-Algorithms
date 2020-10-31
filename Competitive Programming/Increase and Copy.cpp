#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 998244353

typedef pair<ll, ll> pll;

int func(int c, int n){
    return (n+c)/(c+1)-1+c;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int resprev, resnow;
        resprev = func(0, n);
        bool ch = false;

        for(int i=1; i<n; i++){
            resnow = func(i, n);

            if(resnow > resprev){
                cout << resprev << endl;
                ch = true;
                break;
            }

            resprev = resnow;
        }

        if(!ch){
            cout << resprev << endl;
        }

    }

    return 0;
}