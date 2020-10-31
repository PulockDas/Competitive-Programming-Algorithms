#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

vector < ll > vec;

ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

ll findGCD(ll n)
{
    ll result = vec[0];
    for (ll i = 1; i < n; i++)
        result = gcd(vec[i], result);

    return result;
}

int main ()
{
    ll n, m;
    cin >> n >> m;

    ll finput, input, i=1; ///input times
    cin >> finput;
    ll ans1 = finput;

    while(i<n){
        cin >> input;
        vec.push_back(input - finput);
        finput = input;

        i++;
    }

    ll g = findGCD(vec.size());

    i = 0;
    bool ch = false;
    ll ans;

    while(i < m){
        cin >> input;
        if(!ch){
            if(g % input == 0)
                ch = true;
                ans = i+1;
        }

        i++;
    }

    if(!ch)
        cout << "NO";

    else
        cout << "YES" << endl << ans1 << ' ' <<ans;

    return 0;
}
