#include<bits/stdc++.h>
using namespace std;
int main ()
{
    while(1)
    {
        int n;
        cin>>n;
        if(n<10)
            cout<<n<<endl;
        else
        {
            int a=n-9;
            while(a/10!=0) a=a/10;
            cout<<(n-9)*10+a<<endl;
        }
    }
    return 0;
}
