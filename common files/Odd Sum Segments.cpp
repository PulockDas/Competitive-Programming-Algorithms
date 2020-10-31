#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
    ll q;
    cin >> q;

    ll n, k;

    while(q--){
        cin >> n >> k;

        ll arr[n], cop = k;
        for(ll i=0; i<n; i++)
            cin >> arr[i];

        ll s = 0, i;
        vector <ll > vec;

        for(i=0; i<n && k > 0; i++){
            s += arr[i];

            if(s % 2 == 1){
                vec.push_back(i+1);
                s = 0;
                k--;
            }
        }

        if(i<n && k==0){
            s = 0;
            for( ; i<n; i++)
                s += arr[i];

            if(s % 2 == 0){
                cout << "YES"<<endl;
                for(ll j=0; j<vec.size()-1; j++)
                    cout << vec[j] << ' ';
                cout << n << endl;
            }

            else cout << "NO" << endl;
        }

        else if(i>n && k!=0)
            cout << "NO" <<endl;

        else if(vec.size() < cop)
            cout << "NO" <<endl;

        else{
            cout << "YES"<<endl;
            for(ll j=0; j<vec.size()-1; j++)
                cout << vec[j] << ' ';
            cout << n << endl;
        }
    }

    return 0;
}
