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
        string s[9];
        for(ll i=0; i<9; i++)
            cin >> s[i];

        // cout << endl;

        ll j = 0;
        for(ll i=0; i<9; i++){
            if(s[i][j] == '9')
                s[i][j] = '8';
            else
                s[i][j] += 1;
            
            j += 3;
            if(j>=9){
                j = j%9;
                j++;
            }

            cout << s[i]<<endl;
        }
    }

    return 0;
}