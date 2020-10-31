#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2 * acos(0.0)
#define mod 998244353
#define loop(i, n) for (int i = 0; i < n; i++)

typedef pair<ll, ll> pll;

void solve(ll test)
{
    ll n, q;
    cin >> n >> q;

    ll arr[n];
    loop(i, n)
    {
        cin >> arr[i];
    }

    ll plus = 0, minus = 0;
    bool peak = true;

    ll peakval = 0, downval = 0;

    loop(i, n)
    {
        if (peak)
        {
            if (arr[i] > peakval)
            {
                if(i==n-1){
                    // peak = false;
                    plus += arr[i];
                    break;
                    // downval = arr[i];
                }
                peakval = arr[i];
            }
            else
            {
                peak = false;
                plus += peakval;
                downval = arr[i];
            }
        }
        else{
            if (arr[i] < downval)
            {
                if(i==n-1){
                    break;
                }
                downval = arr[i];
            }
            else
            {
                peak = true;
                minus += downval;
                peakval = arr[i];

                if(i==n-1){
                    // peak = false;
                    plus += arr[i];
                    break;
                    // downval = arr[i];
                }
            }
        }
    }

    cout << plus-minus << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll test;
    cin >> test;

    for (ll i = 1; i <= test; i++)
    {
        solve(i);
    }

    return 0;
}