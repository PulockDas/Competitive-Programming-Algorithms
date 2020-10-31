#include <iostream>
using namespace std;

main ()
{
    int n,a,j,b;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        for(j=1;j*j<=a;j++)
        {
            b=0;
            if(j*j==a)
            {
                cout<<"YES"<<endl;
                b=b+1;
            }
        }
        if(b==0)
            cout<<"NO"<<endl;
    }

}
