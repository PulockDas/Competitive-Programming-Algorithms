#include <bits/stdc++.h>
using namespace std;
main ()
{
    string x[10];
    string y[10];
    getline(cin, x);
    if(x.at[8]=='A')
    {
        if(x.at[0]=='1'&& x.at[1]=='2')
        {
            x.at[0]='0';
            x.at[1]='0';
            cout<<x;
        }
        else
            cout<<x;
    }

}
