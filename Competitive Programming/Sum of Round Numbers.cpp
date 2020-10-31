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

    while(t--){
        string num;
        cin >> num;

        ll len = num.length();

        vector <ll> vec;
        for(ll i=len-1, j=0; i>-1; i--,j++){
            if(num[j]=='0'){
                continue;
            }
            ll dig = num[j]-'0';
            vec.push_back(dig * pow(10, i));
        }

        cout << vec.size()<<endl;
        for(auto element:vec){
            cout << element << " ";
        }
        cout << endl;
    }

    return 0;
}