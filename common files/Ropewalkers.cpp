#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
    ll arr[3], d;
    cin >> arr[0] >> arr[1] >> arr[2] >> d;

    sort(arr, arr+3);
    ll ans = 0;
    ll dif = arr[1] - arr[0];

    if(dif < d)
        ans = d - dif;

    dif = arr[2] - arr[1];

    if(dif < d)
        ans += d - dif;

    cout << ans <<endl;

    return 0;
}
