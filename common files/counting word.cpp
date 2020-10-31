#include <bits/stdc++.h>
using namespace std;
int main ()
{
    string x;
    int j;
    while(getline(cin,x))
    {
        int c=0;
        for(int i=0;i<x.length();i++)
        {
            if(isalpha(x[i]))
            {
                for(j=i+1;;j++)
                {
                    if(!isalpha(x[j]))
                    {
                        c++;
                        break;
                    }
                }
                i=j;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
