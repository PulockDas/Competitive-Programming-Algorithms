#include <bits/stdc++.h>
using namespace std;

void Partition(int *arr, int start, int endn){
    if(endn>start)
    {
        int pivt=endn,t,n=endn-1;
        while(n>=start){
            if(arr[pivt]<arr[n])
            {
                t=arr[pivt];
                arr[pivt]=arr[n];
                arr[n]=t;
                pivt=n;
            }
            n--;
        }
        Partition(arr, 0, pivt-1);
        Partition(arr, pivt+1, endn);
    }
    else
        return;
}

void quicksort(int *arr, int endn){
    Partition(arr, 0, endn);
}

int main(){
    int arr[8]={7,2,1,6,8,5,3,4};
    quicksort(arr, 7);
    for(int i=0;i<8;i++)
        cout<<arr[i]<<"\t";
    return 0;
}

