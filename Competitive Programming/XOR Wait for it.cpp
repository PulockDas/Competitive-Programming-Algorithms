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
    
    ll t;
    cin >> t;
    
    while(t--){
        ll l, r;
        cin >> l >> r;
        
        ll minus = r-l+1;
        ll last=-1;

        if(minus%2 == 1){
            if(l%2 == 0)
                last = 0;
            else
                last = 1;
        }

        minus /= 2;
        ll last2;
        if(minus % 2 == 0){
            last2 = 0;
        }
        else{
            last2 = 1;
        }

        if(last!=-1){
            last2 = last^last2;
        }
        
        if(last2 == 0)
            cout<<"Even\n";
        else
            cout<<"Odd\n";        
    }

    return 0;
}