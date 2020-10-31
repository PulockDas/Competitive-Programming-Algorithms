#include <bits/stdc++.h>
using namespace std;

bool isprime(int x){
    for(int i=2; i*i<=x; i++){
        if(x%i==0)
            return 0;
    }
    return 1;
}

int main ()
{
    int n,m;
    cin>>n>>m;
    if(isprime(m)){
        n++;
        while(n<m){
            if(isprime(n)){
                cout<<"NO";
                break;
            }
            n++;
        }
        if(n==m)
            cout<<"YES";
    }
    else
        cout<<"NO";

    return 0;
}
