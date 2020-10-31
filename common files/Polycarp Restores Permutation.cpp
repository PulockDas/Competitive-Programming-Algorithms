#include <bits/stdc++.h>
using namespace std;

#define mx 200001
long long ch[mx];

int main()
{
    long long n;
    cin>>n;
    n-=1;

    long long arr[n];
    long long pi[n+1];
    pi[0]=0;

    for(long long i=0; i<n; i++){
        cin>>arr[i];
        pi[i+1]=pi[i]+arr[i];
        if(pi[i+1]>n){
            cout<<-1;
            return 0;
        }
        //cout<<pi[i+1]<<endl;
    }

    long long mi=pi[0];
    n++;

    for(long long i=1; i<n; i++){
        if(pi[i]<mi)
            mi=pi[i];
    }
    //cout<<mi<<endl;

    long long x=1-mi;

    for(long long i=0; i<n; i++){
        pi[i]+=x;
        if(ch[pi[i]]==1 || pi[i]>n || pi[i]<1){
            cout<<-1;
            return 0;
        }

        if(ch[pi[i]]==1){
            cout<<-1;
            return 0;
        }

        ch[pi[i]]=1;
    }

    for(long long i=0; i<n; i++)
        cout<<pi[i]<<' ';

    return 0;
}
