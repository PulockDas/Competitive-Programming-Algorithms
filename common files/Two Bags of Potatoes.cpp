#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int y,k,n,x,ch=0;
    cin>>y>>k>>n;
    int m=y%k;
    int e=y-m+k;
    x=e-y;
    while(e<=n){
        ch=1;
        cout<<x<<" ";
        x+=k;
        e=x+y;
    }

    if(ch==0)
        cout<<"-1";
    return 0;
}
