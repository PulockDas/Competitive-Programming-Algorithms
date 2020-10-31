#include <bits/stdc++.h>
using namespace std;

int prime[300000],nprime,mark[300000];

void sieve(int n){
    int i,j,limit=sqrt(n*1.)+2;

    mark[1]=1;

    for(i=4;i<=n;i+=2)
        mark[i]=1;

    prime[nprime++]=2;

    for(i=3;i<=n;i+=2){
        if(!mark[i]){
            prime[nprime++]=i;

            if(i<=limit){

                for(j=i*i;j<=n;j+=2*i) mark[j]=1;
            }
        }
    }
}

int main ()
{
    int n;
    cin>>n;
    sieve(n);
    cout<<"Enter a number(between 2-n) to check if it is prime:\n";
    cin>>n;
    if(mark[n]!=1)
        cout<<"It's prime";
    else
        cout<<"It's not prime";

    return 0;
}
