#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string x;
    cin>>x;
    sort(x.begin(),x.end());

    int l=x.length();

    for(int i=l/2; i<l ; i++){
        cout<<x[i];
        if(i!=l-1)
            cout<<"+";
    }
    return 0;
}
