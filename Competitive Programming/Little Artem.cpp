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
        ll n, m;
        cin >> n>>m;

        char c[n][m];
        memset(c, 'C', sizeof(c));

        c[0][1] = 'B';
        c[0][0] = 'B';

        if((n*m)%2 == 0){
            c[1][0] = 'B';
        }
        
        for(ll i=0; i<n; i++){
            for(ll j=0; j<m; j++){
                if(c[i][j]=='C'){
                    if(j == 0){
                        if(c[i-1][j]=='B')
                            c[i][j] = 'W';
                        else{
                            c[i][j] = 'B';
                        }
                    }

                    else{
                        if(c[i][j-1] == 'W')
                            c[i][j] = 'B';
                        else{
                            c[i][j] = 'W';
                        }
                    }
                }

                cout << c[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}