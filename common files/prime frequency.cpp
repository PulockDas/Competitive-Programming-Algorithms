#include <bits/stdc++.h>
using namespace std;

bool isprime(int a)
{
    if(a==1)
        return 0;
    else
    {
        int b=0;
        for(int i=2;i*i<=a;i++)
        {
            if(a%i==0)
                b++;
        }
        if(b>0)
            return false;
        else
            return true;
    }
}

int main ()
{
    string x;
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>x;
        sort(x.begin(),x.end());
        cout<<"Case "<<i+1<<": ";
        int b=0;
        for(int k=0;k<x.length();)///per char
        {
            int s=0,j;
            for(j=k;j<x.length();j++)///counting occurance
            {
               if(x[k]==x[j])
                 s++;
                else
                    break;
            }
            if(isprime(s))
                {
                    cout<<x[k];
                    b++;
                }
            k=j;
        }
        if(b==0)
            cout<<"empty";
        cout<<endl;
    }
    return 0;
}
