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

    ll d, n;
    cin >> d >> n;

    if(d==0){
        if(n!=100)
            cout << n<<endl;
        else
            cout << 101<<endl;
    }

    else if(d==1){
        if(n!=100)
            cout << 100*n<<endl;
        else
            cout << 101*100<<endl;
    }

    else{
        if(n!=100)
            cout << 10000*n<<endl;
        else
            cout << 101*10000<<endl;
    }

    return 0;
}