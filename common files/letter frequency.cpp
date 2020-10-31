#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t,ma=0;
    cin>>t;
    string x;
    map<char,int>li;
    map<char,int>::iterator it;
    for(int i=0;i<t;i++)///test case
    {
        getline(cin,x);
        for(int j=0;j<x.length();j++)
        {
            if(isalpha(x[j]))
                x[j]=tolower(x[j]);
        }
        sort(x.begin(),x.end());
        for(int j=0;j<x.length();)///counting per
        {
            if(!isalpha(x[j]))
                continue;
            int k;
            int c=0;
          for(k=j;k<x.length();k++)
          {
              if(x[j]==x[k])
                c++;
              else
                break;
          }
          if(ma<c)
            ma=c;
          li[x[j]]=c;
          j=k;
        }
        for(it=li.begin();it!=li.end();it++)
        {
            if(it->second==ma)
                cout<<it->first;
        }
        cout<<endl;
        li.clear();
    }
    return 0;
}
