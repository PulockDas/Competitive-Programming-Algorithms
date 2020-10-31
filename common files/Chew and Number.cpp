#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string x;
    cin>>x;
    int m, by='9';

    if(x[0]>'4' && x[0]!='9'){
        m=x[0];
        cout<<by-m;
    }
    else
        cout<<x[0];

    int l=x.length();

    for(int i=1; i<l; i++){
        if(x[i]>'4'){
            m=x[i];
            cout<<by-m;
        }
        else
            cout<<x[i];
    }

    return 0;
}
