#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;

    //int l=ceil(n/2.0);
    for(int i=0; i<=n; i++){///lines
        for(int j=2*n-2*i; j>0; j--)
            cout<<' ';
        if(i==0)
            cout<<0;
        else{
            for(int j=0; j<=i; j++)
                cout<<j<<' ';
        }

        for(int j=i-1; j>0; j--)
            cout<<j<<' ';
        if(i!=0)
            cout<<0;
        cout<<endl;
    }

    for(int i=n-1; i>=0; i--){///lines
        for(int j=2*n-2*i; j>0; j--)
            cout<<' ';

        if(i==0)
            cout<<0;

        else{
            for(int j=0; j<=i; j++)
                cout<<j<<' ';
        }

        for(int j=i-1; j>0; j--)
            cout<<j<<' ';
        if(i!=0)
            cout<<0;
        cout<<endl;
    }

    return 0;
}
