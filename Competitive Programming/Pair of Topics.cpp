#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;

    vector <ll> plus;
    vector <ll> minus;

    ll teacher[n], student[n];

    for(ll i=0; i<n; i++){
        cin >> teacher[i];
    }
    
    for(ll i=0; i<n; i++){
        cin >> student[i];
    }

    ll emni = 0;
    for(ll i=0; i<n; i++){
        if(teacher[i]>student[i]){
            plus.push_back(teacher[i]-student[i]);
            emni++;
        }
        else if(teacher[i]==student[i]){
            plus.push_back(0);
            minus.push_back(0);
        }
        else
            minus.push_back(student[i]-teacher[i]);
    }

    sort(plus.begin(), plus.end(), greater<ll>());
    sort(minus.begin(), minus.end(), greater<ll>());

    ll plus_size = plus.size();
    ll minus_size = minus.size();

    ll i=0, j=0, ans = 0;
    for(; i<minus_size && j<plus_size; i++){
        for(; j<plus_size; j++){
            if(plus[j] > minus[i]){
                ans += minus_size-i;
            }
            else
                break;
        }
    }

    // cout << plus_size<<" "<< minus_size<<endl;
    cout << ans + (emni*(emni-1))/2 << endl;

    return 0;
}