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
        ll num;
        cin >> num;

        ll monster[num][2];
        cin >> monster[0][0] >> monster[0][1];
        ll total = monster[0][0];
        vector <ll> vec;

        for(ll i=1; i<num; i++){
            cin >> monster[i][0] >> monster[i][1];
            if(monster[i-1][1]<monster[i][0])
                total += monster[i][0]-monster[i-1][1];
        }

        // cout << total<<endl;

        vec.push_back(total);

        for(ll i=1; i<num; i++){
            total = total-monster[i-1][0]+monster[i][0];
            if(i == 1){
                if(monster[num-1][1]<monster[0][0])
                    total += monster[0][0]-monster[num-1][1];
            }
            else{
                if(monster[i-2][1]<monster[i-1][0])
                    total += monster[i-1][0]-monster[i-2][1];
            }

            if(monster[i][0]>monster[i-1][1])
                total -= monster[i][0]-monster[i-1][1];

            vec.push_back(total);

            // cout << total<<endl;
        }

        cout << *min_element(vec.begin(), vec.end())<<endl;
    }

    return 0;
}