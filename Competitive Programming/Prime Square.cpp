#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 1000000007
#define loop(i, n) for(ll i=1; i<=n; i++)

typedef pair<ll, ll> pll;



bool isprime(ll n){
    if(n==1){
        return false;
    }

    for(ll i=2; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
    }

    return true;
}


void solve(ll test){
    ll n;
    cin >> n;

    ll num=n;

    while(!isprime(n) || isprime(n-num+1)){
        n++;

        // cout << n<<endl<<n-num+1<<" hud\n";
    }

    n = n-num+1;
    for(ll i=0; i<num; i++){
        for(ll j=0; j<num; j++){
            if(i==j){
                cout << n<<' ';
                continue;
            }

            cout << 1<<' ';
        }
        cout << endl;
    }

}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll test;
    cin >> test;

    loop(i, test){
        solve(i);
    }

    return 0;
}