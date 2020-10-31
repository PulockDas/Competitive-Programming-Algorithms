#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string a,b;
    vector <char> x;
    while(getline(cin,a)&&getline(cin,b))
    {
        x.clear();
        sort(a.begin(),a.end());
        for(int i=0;i<a.length();)
        {
            int k;
            for(int j=0;j<b.length();j++)
            {
                if(a[i]==b[j])
                {
                    x.push_back(a[i]);
                    break;
                }
            }
            for(k=i+1;k<a.length();k++)
            {
                if(a[i]==a[k])
                    continue;
                else
                    break;
            }
            i=k;
        }
        sort(x.begin(),x.end());
        for(int p=0;p<x.size();p++)
            cout<<x[p];
        cout<<endl;
    }

    return 0;
}
