#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int m=n/2;

    if(n%2==0)
        cout<<m*(m+1);

    else
        cout<<m*(m+1)+m+1;

    return 0;
}
