#include <iostream>
using namespace std;

int main ()
{
    long long n,i,c;
    cin>>n;
    char a[n];

    for(i=0;i<n;i++){
        cin>>a[i];
    }

    for(i=0;i<n;i++){
        if(a[i]>=a[i+1]){
            c=i;
            break;
        }
    }

    for(i=0;i<n;i++){
        if(i!=c)
            cout<<a[i];
        else
            continue;
    }

    return 0;
}
