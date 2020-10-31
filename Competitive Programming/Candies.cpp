#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 998244353

typedef pair<ll, ll> pll;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;

    vector <ll> vec;
    for(ll i=2; i<34; i++){
        vec.push_back(pow(2, i)-1);
    }

    // for(ll i=0; i<vec.size(); i++) cout<<vec[i]<<endl;

    here:
    while (t--)
    {
        ll n;
        cin >> n;

        for(ll i=0; i<32; i++){
            if(n % vec[i] == 0){
                cout << n/vec[i]<<endl;
                goto here;
            }
        }

    }

    return 0;
}