#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,t,c=0;
    char x;
    cin>>n;
    t=n;
    while(t--)
    {
        cin>>x;
        if(x=='8')
            c++;
    }
    n=n/11;
    if(n<=c)
        cout<<n;
    else
        cout<<c;
    return 0;
}
