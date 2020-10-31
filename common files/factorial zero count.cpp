#include <iostream>
using namespace std;
main ()
{
    int n,a,b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        b=0;
        cin>>a;
        for(int j=10;j<=a;j=j+10)
        {
            b=b+1;
        }
        cout<<b<<endl;
    }
}
