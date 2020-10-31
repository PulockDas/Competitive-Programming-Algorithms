#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2*acos(0.0)
#define mod 998244353

typedef pair<ll, ll> pll;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int arr[n];

        for(int i=0; i<n; i++)
            cin >> arr[i];

        sort(arr, arr+n);

        if(arr[0] == arr[n-1])
            cout << n << endl;
        
        else
            cout << 1 << endl;
    }

    return 0;
}