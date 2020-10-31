#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    string x;
    for(int i=0;i<t;i++)///for taking t input
    {
        cin>>x;
        cout<<"Case "<<i+1<<": ";
        int k=0;
        for(int j=0;j<x.length();j++)///for traversing one input
        {
            int s=0;
            if(isdigit(x[j]))
                {
                    s=s+(int)x[j]-48;
                    for(k=j+1;isdigit(x[k]);k++)///for traversing digit
                    {
                        s=10*s+x[k]-48;
                    }
                    for(int d=0;d<s;d++)
                    {
                        cout<<x[j-1];
                    }
                    j=k;
                }
            else
                continue;
        }
        cout<<endl;
    }


    return 0;
}
