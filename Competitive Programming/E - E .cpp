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

    ll n;
    cin >> n;

    ll min = INT_MAX, max = -1;

    while(n--){
        ll num;
        cin >> num;

        if(num>max)
            max = num;
        
        if(num<min)
            min = num;
    }

    cout << max-min<<endl;

    return 0;
}