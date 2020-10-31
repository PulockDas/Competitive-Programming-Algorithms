#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string x;
    cin>>x;

    int l=x.length();
    char c='a';

    int ans=0;
    for(int i=0; i<l; i++){
        int cl=abs(x[i]-c);
        int ancl=26-cl;
        if(cl<ancl)
            ans+=cl;
        else
            ans+=ancl;
        c=x[i];
    }

    cout<<ans;

    return 0;
}
