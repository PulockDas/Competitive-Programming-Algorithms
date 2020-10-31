#include <bits/stdc++.h>
using namespace std;

bool isprime(int x){
    int i=2;
    for(; i*i<=x; i++){
        if(x%i==0)
            return false;
    }

    return true;
}

int main ()
{
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;

        int l=log2(n)+1;
        int p=pow(2, l)-1;
        if(n==p){
            if(!isprime(n)){
                for(int i=2; i*i<=n; i++){
                    if(n%i==0){
                        cout<<n/i;
                        break;
                    }
                }
            }
            else
                cout<<1;
        }
        else
            cout<<p;
        cout<<endl;
    }

    return 0;
}
