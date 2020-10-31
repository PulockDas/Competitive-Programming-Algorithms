#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pi 2 * acos(0.0)
#define mod 1000000007
#define loop(i, s, n) for (ll i = s; i <= n; i++)

typedef pair<ll, ll> pll;

ll power(ll base, ll pow)
{
    ll ans = 1;

    while (1)
    {
        if (pow % 2 == 1 && pow != 1)
        {
            ans *= base;
        }

        pow /= 2;

        if (pow == 0)
            break;
        base = base * base;
    }

    return ans * base;
}

unordered_map<ll, ll> Fib; //Here 0th fib is 1, 1st fib is 2, 2nd fib is 2

ll fib(ll n)
{
    // if(n==0) return 0;
    if (n < 2)
        return 1;
    if (Fib.find(n) != Fib.end())
        return Fib[n];
    Fib[n] = (fib((n + 1) / 2) * fib(n / 2) + fib((n - 1) / 2) * fib((n - 2) / 2)) % mod;
    return Fib[n];
}

void solve(ll test)
{
    ll n, q;
    cin >> n >> q;

    vector<ll> arr(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        // s.insert(arr[i]);
    }

    sort(arr.begin(), arr.end());

    ll tot_sub = 0;
    while (q--)
    {
        ll type;
        cin >> type;

        if (type == 1)
        {
            ll sub;
            cin >> sub;

            tot_sub += sub;
            continue;
        }

        ll left, right, k;

        cin >> left >> right >> k;

        left += tot_sub;
        right += tot_sub;

        vector<ll>::iterator lower;

        lower = lower_bound (arr.begin(), arr.end(), left);

        ll pos = (lower- arr.begin())+k-1;

        if(pos>=n || arr[pos]>right){
            cout << -1<<endl;
            continue;
        }

        cout << arr[pos]-tot_sub<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll test = 1;
    // cin >> test;

    loop(i, 1, test)
    {
        solve(i);
    }

    return 0;
}