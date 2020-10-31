#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    k=(k*l)/nl;
    c=(c*d);
    p=p/np;

    int min=k;
    if(min>c)
        min=c;
    if(min>p)
        min=p;
    cout<<min/n;

    return 0;
}
