#include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long n;
    cin>>n;
    n=n+1;

    if(n==1)
        cout<<"0";
    else if(n%2==0)
        cout<<n/2;
    else
        cout<<n;

    return 0;
}
