#include <bits/stdc++.h>
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
        if(L[i]<R[j]){
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

void mergesort(int arr[],int l,int r)
{
    if(l<r)
    {
        int m=l+(r-l)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merg(arr,l,r,m);
    }
}
void printarr(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int main ()
{
    int arr[]={5,3,78,23,67,30};
    cout<<"Given array is :"<<endl;
    printarr(arr,6);
    mergesort(arr,0,5);
    cout<<"Sorted array is :"<<endl;
    printarr(arr,6);
    return 0;
}
