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
        ll n, k;
        cin >> n >> k;

        double clas = (-1+sqrt(1+8*k*1.0))/2.0;

        ll num = ceil(clas);

        ll prev = num*(num-1)/2;
        prev = k-prev;

        //  cout << num << prev <<endl;

        string ans;
        for(ll i= 0; i<n; i++)
            ans.push_back('a');
        
        ll ind1 = n-1, ind2 = ind1-num;
        ind1 -= prev-1;

        ans[ind1] = 'b', ans[ind2] = 'b';

        cout << ans <<endl; 
    }
    
    return 0;
}