#include <iostream>
using namespace std;
main ()
{
    for(int i=1000;i>=5;i=i-5)
    {
        for(int j=i;j>i-5;j--)
        {
            cout<<j<<"\t";
        }
        cout<<endl;
    }

}
