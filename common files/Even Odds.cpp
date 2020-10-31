#include <iostream>
using namespace std;

int main ()
{
    long long n,k,i;
    cin>>n>>k;
    i=n/2;

    if(n%2==0){
        if(k<=i){
            cout<<2*k-1;
        }
        else
            cout<<(k-i)*2;
    }

    else{
        i=i+1;
        if(k<=i){
            cout<<2*k-1;
        }
        else
            cout<<(k-i)*2;
    }
    return 0;
}
