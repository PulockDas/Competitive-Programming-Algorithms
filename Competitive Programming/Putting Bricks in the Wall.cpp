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
    ll n;
    cin >> n;

    string s[n];
    for(ll i=0; i<n; i++){
        cin >> s[i];
    }

    ll ans =0;

    if(s[0][1]==s[1][0]){
        char in;

        if(s[0][1]=='0') in='1';
        else in='0';

        vector<ll>vec;

        if(in!=s[n-1][n-2]){
            ans++;
            vec.push_back(n);
            vec.push_back(n-1);
        }
        if(in!=s[n-2][n-1]){
            ans++;
            vec.push_back(n-1);
            vec.push_back(n);
        }

        cout << ans <<endl;
        for(ll i=0; i<vec.size(); i+=2){
            cout << vec[i]<<' '<<vec[i+1]<<endl;
        }
        return;
    }

    ans++;

    if(s[n-1][n-2]==s[n-2][n-1]){
        char in= s[n-1][n-2];

        cout << ans<<endl;

        if(s[1][0]==in){
            cout << 2 <<' '<<1<<endl;
        }
        else{
            cout << 1<<' '<<2<<endl;
        }
        return;
    }

    char in = s[0][1];

    cout << ans+1<<endl;

    if(s[n-1][n-2]==in){
        cout << 2 <<' '<<1<<endl;
        cout << n << ' '<<n-1<<endl;
        return;
    }

    cout << 2<<' '<<1<<endl;
    cout << n-1<<' '<<n<<endl;
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