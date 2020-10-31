#include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long n,m;
    cin>>n>>m;
    here :
    if(n==0 || m==0)
        cout<<n<<" "<<m;
    else if(n==m)
        cout<<n<<" "<<m;
    else{
        if(n>m){
            if(n>=2*m){
                n=n%(2*m);
                goto here;
            }
        }
        else{
            if(m>=2*n){
                m=m%(2*n);
                goto here;
            }
        }
        cout<<n<<" "<<m;
    }

    return 0;
}
