#include <iostream>
using namespace std;

void merg(int arr[],int l,int r,int m)
{
    int n1=m-l+1;
    int n2=r-m;
    int i,j,k;
    int L[n1],R[n2];
    for(i=0;i<n1;i++)
        L[i]=arr[l+i];
    for(i=0;i<n2;i++)
        R[i]=arr[m+i+1];
    for(i=0,j=0,k=l;i<n1&&j<n2;)
    {
        if(L[i]<=R[j]){
            arr[k]=L[i];k++;i++;
        }
        else{
            arr[k]=R[j];k++;j++;
        }
    }
    while(i<n1)
    {
        arr[k]=L[i];k++;i++;
    }
    while(j<n2)
    {
        arr[k]=R[j];k++;j++;
    }
}

void mergesort(int arr[], int low, int high){
    if(low<high){
        int m=low+(high-low)/2;
        mergesort(arr, low, m);
        mergesort(arr, m+1, high);
        merg(arr, low, high, m);
    }
}

void printarr(int arr[], int si){
    int i=0;
    while(i<si){
        cout<<arr[i]<<"\n";
        i++;
    }
}

int main()
{
    int arr[]={57,8,67,23,30,39};
    int si=sizeof(arr)/sizeof(arr[0]);
    mergesort(arr, 0, si-1);
    printarr(arr, si);


    return 0;
}
