#include <bits/stdc++.h>
using namespace std;

long long power(int a, int b){
    long long mul=1;
    for(int i=0; i<b; i++)
        mul*=a;
    return mul;
}

int main ()
{
    int n;
    cin>>n;
    long long s=0;

    for(int i=1; i<=n; i++)
        s+=power(2, i);

    cout<<s;

    return 0;
}
