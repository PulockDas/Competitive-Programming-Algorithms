#include <bits/stdc++.h>
using namespace std;

int min(int a, int b, int c){
    int sm=a;
    if(sm>b)
        sm=b;
    if(sm>c)
        sm=c;
    return sm;
}

int main ()
{
    int k2, k3, k5, k6;
    cin>>k2>>k3>>k5>>k6;

    int a=min(k2, k5, k6);

    long long ans=a*256;
    k2-=a, k5-=a, k6-=a;

    a=k2;
    if(k2>k3)
        a=k3;
    ans+=32*a;

    cout<<ans;

    return 0;
}
