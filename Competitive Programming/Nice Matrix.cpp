#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2 * acos(0.0)
#define mod 998244353

typedef pair<ll, ll> pll;

void solve(ll test)
{
    ll n, m;
    cin >> n >> m;

    ll arr[n][m];

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
            cin >> arr[i][j];
    }

    ll ans = 0;

    ll nmost = (n + 1) / 2;
    ll mmost = (m + 1) / 2;

    for (ll i = 0; i < nmost; i++)
    {
        for (ll j = 0; j < mmost; j++)
        {
            vector<ll> vec;

            vec.push_back(arr[i][j]);

            if (i != n - i - 1)
                vec.push_back(arr[n - i - 1][j]);
            if (j != m - j - 1)
                vec.push_back(arr[i][m - j - 1]);
            if(i != n - i - 1 && j != m - j - 1)
                vec.push_back(arr[n - i - 1][m - j - 1]);

            sort(vec.begin(), vec.end());

            ll size = vec.size(), mid = size/2, res = 0;

            for(ll p=0; p<size; p++)
                res += abs(vec[p]-vec[mid]);
            
            ans += res;
        }
    }

    cout << ans << endl;
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