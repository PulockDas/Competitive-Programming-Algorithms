#include <iostream>

using namespace std;

main ()
{
    int n,a,b,c,t,temp;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>a>>b>>c;
        if(a>b)
        {
            if(a>c)
            {
                temp=a;
                a=c;
                c=temp;
            }
            if(a>b)
            {
                t=a;
                a=b;
                b=t;
            }
        }
        else
        {
            if(b>c)
            {
                temp=b;
                b=c;
                c=temp;
            }
            if(b<a)
            {
                t=b;
                b=a;
                a=t;
            }
        }
       cout<<"Case "<<i<<": "<<a<<" "<<b<<" "<<c<<endl;
    }
}
