#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int a1,a2,a3,a4;
    cin>>a1>>a2>>a3>>a4;

    string x;
    cin>>x;
    int l,c1=0,c2=0,c3=0,c4=0;
    l=x.length();
    for(int i=0; i<l; i++){
        if(x[i]=='1')
            c1++;
        else if(x[i]=='2')
            c2++;
        else if(x[i]=='3')
            c3++;
        else
            c4++;
    }

    cout<<c1*a1+c2*a2+c3*a3+c4*a4;
    return 0;
}
