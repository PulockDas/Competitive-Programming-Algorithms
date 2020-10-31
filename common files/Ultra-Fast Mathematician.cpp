#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x,y;
    cin>>x>>y;
    int l=x.length();
    while(l--){
        if(x[l]==y[l])
            x[l]='0';
        else
            x[l]='1';
    }

    cout<<x;

    return 0;
}
