#include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long n, k;
    cin >>n >>k;

    if(n < k){
        cout << k - n;
        return 0;
    }

    long long r = n % k;
    long long r1 = k - r;

    cout << min(r, r1);

    return 0;
}
