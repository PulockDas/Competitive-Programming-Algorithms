#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;

    while(t--){
        ll n;
        string x;

        cin >> n >> x;

        string ans1, ans2;
        ans1.push_back('1');
        ans2.push_back('1');


        ll i;
        // bool num = 1;
        for(i=1; i<n; i++){
            if(x[i]=='0'){
                ans1.push_back('0');
                ans2.push_back('0');
            }

            else if(x[i]=='1'){
                ans1.push_back('1');
                ans2.push_back('0');
                break;
            }

            else{
                ans1.push_back('1');
                ans2.push_back('1');
            }
        }

        i++;
        for(; i<n; i++){
            if(x[i] == '0'){
                ans1.push_back('0');
                ans2.push_back('0');
            }
            else if(x[i] == '2'){
                ans1.push_back('0');
                ans2.push_back('2');
            }
            else{
                ans1.push_back('0');
                ans2.push_back('1');
            }
        }

        cout << ans1 <<endl <<ans2<<endl;
    }

    return 0;
}