#include <bits/stdc++.h>
using namespace std;

bool isprime(long long n){
    if(n == 1)
        return false;

    for(int i=2; i*i<=n; i++){
        if(n % i == 0)
            return false;
    }

    return true;
}

int main ()
{
    long long n, a;
    cin >> n >> a;

    long long ini = a;
    while(!isprime(ini)){
        ini++;
    }

    long long hi = a+n-1;
    if(hi >= ini)
        cout << (hi*(hi+1)/2) - (a*(a-1)/2);

    else
        cout << (hi*(hi+1)/2) - (a*(a-1)/2) - hi + ini;

    return 0;
}
