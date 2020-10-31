#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 998244353

string basic[10];

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    basic[0] = "063";
    basic[1] = "010";
    basic[2] = "093";
    basic[3] = "079";
    basic[4] = "106";
    basic[5] = "103";
    basic[6] = "119";
    basic[7] = "011";
    basic[8] = "127";
    basic[9] = "111";

    string input;
    cin >> input;

    while(input != "BYE"){
        input.erase(input.length()-1, 1);
        string before, after;
        ll pos = input.find('+');
        // cout << pos<<endl;
        // cout << input << endl;

        after = input.substr(pos+1, input.length()-pos-1);
        before = input.substr(0, pos);

        cout << input<<"=";

        ll numbefore=0, numafter=0;
        for(ll i=before.length()-3,k=0; i>-1; i-=3,k++){
            string s = before.substr(i, 3);

            for(ll j=0; j<10; j++){
                if(basic[j] == s){
                    numbefore += j*pow(10, k);
                }
            }
        }
        
        for(ll i=after.length()-3,k=0; i>-1; i-=3,k++){
            string s = after.substr(i, 3);

            for(ll j=0; j<10; j++){
                if(basic[j] == s){
                    numafter += j*pow(10, k);
                }
            }
        }

        ll num = numbefore+numafter;

        string ans = "";
        while (num)
        {
            ll digit = num%10;
            ans = basic[digit]+ans;

            num/=10;
        }

        cout << ans << endl;

        cin >> input;
    }

    return 0;
}