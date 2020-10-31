#include <iostream>
using namespace std;

int main ()
{
    int n,a,b,s=0,i,j;
    cin>>n>>a>>b;
    int arr[n];
    for(int k=0;k<n;k++)
    {
        cin>>arr[k];
    }
    for(i=0,j=n-1;i<n/2;i++,j--)
    {
        if(arr[i]==0)
        {
            if(arr[j]!=0)
            {
                if(arr[j]==2)
                    s=s+a;
                else
                    break;
            }
        }
        else if(arr[i]==1)
            {
                if(arr[j]!=1)
                {
                    if(arr[j]==2)
                        s=s+b;
                    else
                        break;
                }
            }
        else
        {
            if(arr[j]==0)
                s=s+a;
            else if(arr[j]==1)
                s=s+b;
            else
                {
                    if(a>b)
                        s=s+b+b;
                    else
                        s=s+a+a;
                }
        }

    }
    if(i==(n/2))
    {
        if(n%2!=0)
        {
            if(arr[i]==2)
                {
                    if(a>b)
                        s=s+b;
                    else
                        s=s+a;
                }
        }
        cout<<s;
    }
    else
        cout<<endl<<-1;

    return 0;
}
