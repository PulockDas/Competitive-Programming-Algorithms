#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,d,m;
    cin>>n>>d>>m;
    int x[m],y[m];
    for(int i=0;i<m;i++)
    {
        cin>>x[i]>>y[i];
        if(d<n-d)
        {
            if(x[i]<=d)
            {
                if(y[i]>=d-x[i]&&y[i]<=d+x[i])
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            else if(x[i]>d&&x[i]<n-d)
            {
                if(y[i]>=x[i]-d&&y[i]<=d+x[i])
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            else
            {
                if(y[i]>=x[i]-d&&y[i]<=2*n-x[i]-d)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
        }
        else if(d>n-d)
        {
            if(x[i]<=n-d)
            {
                if(y[i]>=d-x[i]&&y[i]<=d+x[i])
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            else if(x[i]>n-d&&x[i]<d)
            {
                if(y[i]>=d-x[i]&&y[i]<=2*n-x[i]-d)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            else
            {
                if(y[i]>=x[i]-d&&y[i]<=2*n-x[i]-d)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
        }
        else
        {
            if(x[i]<=d)
            {
                if(y[i]>=d-x[i]&&y[i]<=d+x[i])
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            else
            {
                if(y[i]>=x[i]-d&&y[i]<=2*n-x[i]-d)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
        }

    }
    return 0;
}
