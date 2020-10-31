#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n,t;
    cin>>n>>t;
    char c[n];
    for(int i=0; i<n; i++)
        cin>>c[i];
    while(t--){
        for(int i=0; i<n;){
            if(c[i]=='B' && c[i+1]=='G'){
                c[i]='G';
                c[i+1]='B';
                i=i+2;
            }
            else
                i++;
        }
    }
    for(int i=0; i<n; i++)
        cout<<c[i];

    return 0;
}
