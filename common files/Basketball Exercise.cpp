#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
    ll n;
    cin >> n;

    ll arr1[n], arr2[n];

    for(ll i=0; i<n; i++)
        cin >> arr1[i];

    for(ll i=0; i<n; i++)
        cin >> arr2[i];

    if(n==1){
        cout << max(arr1[0],arr2[0]);
        return 0;
    }

    ll max1 = arr2[0]+arr1[1];
    max1 = max(max1, arr1[0]);

    ll max2 = arr1[0]+arr2[1];
    max2 = max(max2, arr2[0]);

    for(ll i=2; i<n; i++){
        ll c1 = arr1[i] + max2;
        ll c2 = arr2[i] + max1;

        max1 = max(c1, max1);
        max2 = max(c2, max2);
    }

    cout << max(max1, max2);

    return 0;
}
