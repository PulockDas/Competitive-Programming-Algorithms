#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n,x=0;
    cin>>n;
    string p;

    while(n--){
        cin>>p;

        if(p[1]==43)
            x++;

        else
            x--;
    }

    cout<<x;

    return 0;
}
