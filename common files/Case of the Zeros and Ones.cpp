#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int l,a1=0,a2=0;
    cin>>l;
    char c;

    while(l--){
        cin>>c;
        if(c=='1')
            a1++;
        else
            a2++;
    }

    cout<<abs(a1-a2);

    return 0;
}
