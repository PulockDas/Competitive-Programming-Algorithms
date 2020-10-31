#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string n;
    cin>>n;
    int c=0,l=n.length();
    while(l--){
        if(n[l]=='4' || n[l]=='7')
            c++;
    }
    if(c==4 || c==7)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
