#include <iostream>
using namespace std;

int main ()
{
    int t;
    long long a,b,c,d;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a;
        cin>>b;
        cin>>c;
        d=c/2;
        if(c%2==0)
            cout<<(a-b)*d<<endl;
        else
            cout<<a*(d+1)-b*d<<endl;
    }
    return 0;
}
