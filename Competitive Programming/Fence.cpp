#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, k;
    cin >> n >> k;

    ll sum[n], p = 0;
    for(ll i=0; i<n; i++){
        ll input;
        cin >> input;

        p += input;
        sum[i] = p;
    }

    ll minus = sum[k-1], ans = 0;
    //cout << minus << endl;//hudai
    for(ll i=k; i<n; i++){
        //cout << sum[i] - sum[i-k]<<endl;//hudai
        if(sum[i] - sum[i-k] < minus){
            minus = sum[i] - sum[i-k];
            ans = i-k+1;
        }
    }

    cout << ++ans <<endl;

    return 0;
}