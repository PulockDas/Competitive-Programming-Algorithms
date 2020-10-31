#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 1000000007
#define loop(i, s, n) for(ll i=s; i<=n; i++)

typedef pair<ll, ll> pll;

ll power(ll base, ll pow){
    ll ans = 1;

    while(1){
        if(pow % 2 == 1 && pow != 1){
            ans *= base;
        }

        pow /= 2;

        if(pow == 0)
            break;
        base = base*base;
    }

    return ans*base;
}

unordered_map<ll,ll> Fib;//Here 0th fib is 1, 1st fib is 2, 2nd fib is 2

ll fib(ll n)
{
    // if(n==0) return 0;
    if(n<2) return 1;
    if(Fib.find(n) != Fib.end()) return Fib[n];
    Fib[n] = (fib((n+1) / 2)*fib(n/2) + fib((n-1) / 2)*fib((n-2) / 2)) % mod;
    return Fib[n];
}




void solve(ll test){
    ll n, m;
    cin >> n >> m;

    map<ll, vector<ll>>row_wise;//each row elements

    ll row[n][m];
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            cin >> row[i][j];
            row_wise[row[i][0]].push_back(row[i][j]);
        }
    }

    set<ll> s_from_row;//first colum set from given rows

    
    for(ll j=0; j<n; j++){
        s_from_row.insert(row[j][0]);
    }
    

    map<ll, set<ll>> s_from_column;//the all set from given columns
    map<ll, vector<ll>> column_wise;

    ll column[m][n];
    for(ll i=0; i<m; i++){
        for(ll j=0; j<n; j++){
            cin >> column[i][j];
            s_from_column[column[i][0]].insert(column[i][j]);
            column_wise[column[i][0]].push_back(column[i][j]);
        }
    }

    for(auto mal:s_from_column){
        if(s_from_row==mal.second){
            ll suru = mal.first;

            vector <ll> temp;
            temp = column_wise[suru];

            for(auto mal2:temp){
                
                ll len=row_wise[mal2].size();
                for(ll k=0; k<len; k++){
                    cout << row_wise[mal2][k]<<' ';
                }
                cout<<endl;
            }
            return;
        }
    }
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll test;
    cin >> test;

    loop(i, 1, test){
        solve(i);
    }

    return 0;
}