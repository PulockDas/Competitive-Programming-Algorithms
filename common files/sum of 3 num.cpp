#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,m,div;
    cin>>n;
    m=n%3;
    div=n/3;
    if(m!=0&&div%3==0)
        cout<<div+1<<" "<<div-1<<" "<<div+m;
    else if(m==0&&div%3==0)
    {
        cout<<div-1<<" "<<div-1<<" "<<div+2;
    }
    else
    {
        if((div+m)%3!=0)
            cout<<div<<" "<<div<<" "<<div+m;
        else
        {
            if(m==1)
               cout<<div<<" "<<div-1<<" "<<div+2;
            else
                cout<<div<<" "<<div+1<<" "<<div+1;
        }
    }
    return 0;
}
