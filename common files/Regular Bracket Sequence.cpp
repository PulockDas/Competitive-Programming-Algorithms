#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int a1, a2, a3, a4;
    cin>>a1>> a2>> a3>> a4;

    if(a1!=0 && a4!=0){
        if(a1==a4)
            cout<<1;
        else
            cout<<0;
    }

    else if(a1==0 && a4==0)
    {
        if(a3!=0)
            cout<<0;

        else
            cout<<1;
    }

    else
        cout<<0;

    return 0;
}
