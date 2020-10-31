#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string x;
    cin>>x;
    int l=x.length(),i;
    for(i=0; i<l; i++){
        if(x[i]=='H' || x[i]=='Q' || x[i]=='9'){
            cout<<"YES";
            break;
        }
    }
    if(i==l)
        cout<<"NO";

    return 0;
}
