#include <iostream>
using namespace std;

int num[10],temp[10];

void merges(int lo,int hi)
{
    if(lo==hi) return;
    int mid=(lo+hi)/2;
    merges(lo,mid);
    merges(mid+1,hi);
    int i,j,k;
    for(i=lo,j=mid+1,k=lo;k<=hi;k++)
    {
        if(i==mid+1) temp[k]=num[j++];
        else if(j==hi+1)temp[k]=num[i++];
        else if(num[i]>num[j])temp[k]=num[j++];
        else temp[k]=num[i++];
    }
    for(i=lo;i<=hi;i++)
        num[i]=temp[i];
}

int main ()
{
    int i;
    for(i=0;i<10;i++)
        cin>>num[i];
    merges(0,9);
    for(i=0;i<10;i++){
        cout<<num[i]<<endl;
    }
    return 0;
}
