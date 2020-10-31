#include <bits/stdc++.h>
using namespace std;

#define mx 1000001
bool prime[mx];

void conssieve(void){
    memset(prime, true, mx);

    prime[1]=false;
    long long p=2;
    for(; p*p<mx; p++){
        if(prime[p]==true){
            for(long long i=p*p; i<mx; i+=p)
                prime[i]=false;
        }
    }
}

bool issq(long long x){
    long long p=sqrt(x);
    if(p*p==x)
        return true;
    return false;
}

int main ()
{
    long long n;
    cin>>n;
    long long arr[n];
    conssieve();
    for(long long i=0; i<n; i++){
        cin>>arr[i];
        if(issq(arr[i])){
            long long p=sqrt(arr[i]);

            if(prime[p]==true)
                cout<<"YES";
            else
                cout<<"NO";
        }
        else
            cout<<"NO";
        cout<<"\n";
    }

    return 0;
}
