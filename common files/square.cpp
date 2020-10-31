#include <iostream>
using namespace std;
main ()
{
    int n;
    cin>>n;
    int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        for(int j=1;j<=a*a;j++)
        {
            cout<<"*";
            if(j%a==0)
                cout<<endl;
        }
    }

}
