#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string x;
    int a,b,c,s;
    while(getline(cin,x))
    {
        if(!isdigit(x[0]))
        {
            for(int j=x.length()-1;j>=0;j--)///alpha code write
            {
                if((int)x[j]>99)
                {
                    a=x[j]%10;
                    b=((x[j]-a)/10)%10;
                    c=(x[j]-(a+b*10))/100;
                    s=c+a*100+b*10;
                    if(s==1)
                    {
                        cout<<"001";
                    }
                    else
                        cout<<s;
                }
                else
                {
                    a=x[j]%10;
                    b=(x[j]-a)/10;
                    s=10*a+b;
                    cout<<s;
                }
            }
        }
        else
        {
            reverse(x.begin(), x.end());
            for(int j=0;j<x.length();)
            {
                if(x[j]!='1')
                {
                    s=((x[j]-48)*10)+(x[j+1]-48);
                    cout<<(char)s;
                    j=j+2;
                }
                else
                {
                    s=((x[j]-48)*100)+((x[j+1]-48)*10)+x[j+2]-48;
                    cout<<(char)s;
                    j=j+3;
                }
            }

        }
        cout<<endl;
    }
    return 0;
}

