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
        string in1, in2;
        cin >> in1 >> in2;

        ll num1=0, num2=0;

        ll l1 = in1.length();
        ll l2 = in2.length();

        for(ll i=0; i<l1; i++){
            ll dig = in1[i]-'0';
            num1 += dig*pow(10, i);
        }
        
        for(ll i=0; i<l2; i++){
            ll dig = in2[i]-'0';
            num2 += dig*pow(10, i);
        }

        ll num = num1+num2;

        while (num%10 == 0)
        {
            num /= 10;
        }
        

        while (num / 10 != 0)
        {
            ll dig = num % 10;

            cout << dig;

            num /= 10;
        }

        ll dig = num % 10;

        cout << dig<<endl;
    }

    return 0;
}