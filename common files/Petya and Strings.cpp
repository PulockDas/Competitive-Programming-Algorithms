#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string x,y;
    cin>>x>>y;
    int i=0;

    while(x[i] && y[i]){
        x[i]=tolower(x[i]);
        y[i]=tolower(y[i]);

        i++;
    }

    if(x==y) cout<<"0";

    else if(x>y) cout<<"1";

    else cout<<"-1";

    return 0;
}
