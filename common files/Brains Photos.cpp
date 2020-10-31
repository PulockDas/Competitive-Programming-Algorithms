#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, m;
    cin>>n >>m;

    n=n*m;

    int ch=0;
    for(int i=0; i<n; i++){
        char c;
        cin>>c;
        if(c=='C' || c=='M' || c=='Y')
            ch=1;
    }

    if(ch==1)
        cout<<"#Color";
    else
        cout<<"#Black&White";

    return 0;
}
