#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,up,low,di;
    string s;
    cin>>n;
    while(n>0)
    {
        cin>>s;
        up=0;low=0;di=0;
        for(int i=0;i<s.size();i++)///counting case of char
        {
            if(s[i]>='A'&&s[i]<='Z')
               up++;
            else if(s[i]>='a'&&s[i]<='z')
                low++;
            else
                di++;
        }
        if(up==0||low==0||di==0)
        {
            if(up==0&&di==0)
                s.replace(s.begin(),s.begin()+2,"7A");
            else if(low==0&&di==0)
                s.replace(s.begin(),s.begin()+2,"7a");
            else if(up==0&&low==0)
                s.replace(s.begin(),s.begin()+2,"aA");
            else if(di==0)
            {
                if(low>1)
                    {
                        for(int i=0;i<s.size();i++)
                        {
                            if(s[i]>='a')
                            {
                                s.replace(i,1,"7");
                                break;
                            }
                        }
                    }
                else
                    {
                        for(int i=0;i<s.size();i++)
                        {
                            if(s[i]<='Z'&&s[i]>='A')
                            {
                                s.replace(i,1,"7");
                                break;
                            }
                        }
                    }
            }

            else if(up==0)
            {
                if(low>1)
                    {
                        for(int i=0;i<s.size();i++)
                        {
                            if(s[i]>='a')
                            {
                                s.replace(i,1,"A");
                                break;
                            }
                        }
                    }
                else
                    {
                        for(int i=0;i<s.size();i++)
                        {
                            if(s[i]<='9')
                            {
                                s.replace(i,1,"A");
                                break;
                            }
                        }
                    }
            }
            else
                {
                    if(di>1)
                    {
                        for(int i=0;i<s.size();i++)
                        {
                            if(s[i]<='9')
                            {
                                s.replace(i,1,"a");
                                break;
                            }
                        }
                    }
                    else
                    {
                        for(int i=0;i<s.size();i++)
                        {
                            if(s[i]<='Z'&&s[i]>='A')
                            {
                                s.replace(i,1,"a");
                                break;
                            }
                        }
                    }
                }
        }
        cout<<s<<endl;
        n--;
    }
    return 0;
}
