#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n,c,max;
    cin>>n;
    int a,b;
    cin>>a>>b;
    c=b;
    max=c;
    for(int i=1; i<n; i++){
        cin>>a>>b;
        c=c+b-a;
        if(max<c)
            max=c;
    }

    cout<<max;

    return 0;
}
