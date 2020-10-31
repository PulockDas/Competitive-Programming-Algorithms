#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
    string s;
    cin >> s;
    ll l = s.length();

    ll check[l];
    memset(check, 0, sizeof(check));

    ll sum = 0;
    for(ll i=0; i<l; i++){

        if(s[i] == 'v'){
            for(i=i+1; i<l; i++){
                if(s[i] == 'v'){
                    sum++;
                    check[i] = sum;
                }

                else break;
            }
        }
    }

    ll ans = 0;
    for(ll i=1; i<l; i++){
        if(s[i] == 'o'){
            ll j = i-1;
            while(check[j] == 0){
                j--;
                if(j < 0)
                    break;
            }
            if(j < 0)
                continue;

            ll bam = check[j];

            for(j=l-1; j>i; j--){
                if(check[j] > 0)
                    break;

            }
            if(check[j] == 0)
                continue;

            ll right = check[j] - bam;

            ans += right*bam;
        }
    }

    cout << ans;

    return 0;
}
