#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main ()
{
    ll n;
    cin >> n;

    ll arr[n];

    for(ll i=0; i<n; i++)
        cin >> arr[i];

    sort(arr, arr+n);

    if(arr[0] == 1){
        cout << 1;
        return 0;
    }

    vector <ll > divisors;

    for(ll i=1; i*i<=arr[0]; i++){
        if(arr[0] % i == 0){
            divisors.push_back(i);
            divisors.push_back(arr[0]/i);
        }
    }

    ll s = 1;

    for(ll i=1; i<divisors.size(); i++){

        ll j;
        for(j=1; j<n; j++){
            if(arr[j] % divisors[i] != 0)
                break;
        }

        if(j == n) s++;
    }

    cout << s;

    return 0;
}
