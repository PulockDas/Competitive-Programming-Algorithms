#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n,k=1;
    cin>>n;
    for(int i=0; i<n; i++){
        int c=0,j=n*n/2,m=n/2;

        for(; k<=j; k++){
            cout<<k<<" "<<n*n+1-k<<" ";
            c++;
            if(c==m){
                k++;
                break;
            }
        }
        cout<<"\n";
    }
    return 0;
}
