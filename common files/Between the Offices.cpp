#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    string x;
    cin>>n>>x;

    int sf=0, fs=0;
    for(int i=0; i<n; i++){
        if(x[i]=='S' && x[i+1]=='F')
            sf++;
        else if(x[i]=='F' && x[i+1]=='S')
            fs++;
    }

    if(sf>fs)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
