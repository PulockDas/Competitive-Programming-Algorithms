#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;

    int l=sqrt(n);
    int sq=l*l;

    if(sq==n)
        cout<<2*l;
    else{
        if(n-sq>l)
            cout<<2*l+2;
        else
            cout<<2*l+1;
    }

    return 0;
}
