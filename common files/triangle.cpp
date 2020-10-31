#include <bits/stdc++.h>
using namespace std;
int main ()
{
    double n,m,k,a;
    cin>>n>>m>>k;
    a=n*m/k;
    if(a-(int)a==0||a-(int)a==.5)
    {
        int c2=ceil(a);
        cout<<"YES"<<endl;
        int q1=ceil(n/k);
        int i=ceil(n*2/k);
        double p3=sqrt(m*m+q1*q1);
        for(; i<=n; i++)
        {
            for(int j=1; j<m; j++)
            {
                double p1=sqrt(i*i+j*j);
                double p2=sqrt((i-q1)*(i-q1)+(m-j)*(m-j));
                double s=(p1+p2+p3)/2;
                double area=sqrt(s*(s-p1)*(s-p2)*(s-p3));
                cout<<i<<" "<<j<<" "<<a<<" "<<area<<endl;
                if(a==area)
                {
                    cout<<"hoise";
                    i=n+1;
                    break;
                }
            }
        }
    }
    else
        cout<<"NO";
    return 0;
}
