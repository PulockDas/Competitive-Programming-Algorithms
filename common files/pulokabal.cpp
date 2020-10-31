#include<bits/stdc++.h>
using namespace std;

int hamming_dst(int a, int b)
{
    int dst=0;
    unsigned val=a^b;
    while(val!=0)
    {
        dst++;
        val&=val-1;
    }
    return dst;
}

int main ()
{
    int t,n,x, max_d;
    cin>>t;
    vector<int>v;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        max_d=0;
        for(int j=0;j<n;j++)
        {
            cin>>x;
            v.push_back(x);
        }
        for(int j=0; j<n-1; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                int d=hamming_dst(v[j], v[k]);
                if(max_d<d)
                    max_d=d;

            }
        }
        v.clear();
        cout<<max_d<<endl;

    }


    return 0;
}
