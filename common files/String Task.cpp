#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string x;
    cin>>x;
    int l=x.length();

    for(int i=0; i<l; i++){
        x[i]=tolower(x[i]);

        if(!(x[i]=='a' || x[i]=='e' || x[i]=='o' || x[i]=='i' || x[i]=='u' ||x[i]=='y'))
            cout<<"."<<x[i];
    }

    return 0;
}
