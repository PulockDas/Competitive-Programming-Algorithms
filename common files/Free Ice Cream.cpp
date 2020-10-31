#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
    ll n, x;
    cin >> n >>x;

    char ch[n];
    ll arr[n];
    ll dis = 0;

    for(ll i=0; i<n; i++){

        cin >> ch[i] >> arr[i];

        if(ch[i] == '+')
            x += arr[i];

        else{
            if(x < arr[i])
                dis++;

            else
                x -= arr[i];
        }
    }

    cout << x << ' ' << dis;

    return 0;
}
