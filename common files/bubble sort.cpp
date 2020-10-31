#include <iostream>
using namespace std;

main ()
{
    int n,t,sm,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        sm=arr[i];
        k=i;
        for(int j=i;j<n-1;j++)
        {
            if(sm>arr[j+1])
            {
                sm=arr[j+1];
                k=j+1;
            }
        }
        t=arr[k];
        arr[k]=arr[i];
        arr[i]=t;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
