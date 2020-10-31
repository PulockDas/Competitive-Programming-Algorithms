#include <iostream>
using namespace std;
main ()
{
    int n,e,ep;
    cin>>n;
    int a;
    for (int i=0;i<n;i++)
    {
        cin>>a;
        ep=a%10;
        a=a/10;
        while(a!=0)
        {
            e=a%10;
            a=a/10;
        }
        cout<<"Sum = "<<ep+e<<endl;
    }
}
