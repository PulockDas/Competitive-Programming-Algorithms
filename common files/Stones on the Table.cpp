#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n,c=0;
    string x;
    cin>>n>>x;
    for(int i=0,j=1; i<n && j<n; ){
        if(x[i]==x[j])
            c++;
        else
            i=j;
        j++;

    }
    cout<<c;

    return 0;
}
