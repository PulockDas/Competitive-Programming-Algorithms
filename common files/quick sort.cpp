#include <iostream>
using namespace std;

void swa(int *a, int *b){
    int t=*a;
    *a=*b;
    *b=t;
}

int part(int arr[], int low, int high){
    int pivot=arr[high];
    int i=low-1;
    for(int j=low; j<high; j++){
        if(arr[j]<=pivot){
            i++;
            swa(&arr[i], &arr[j]);
        }
    }
    swa(&arr[i+1], &arr[high]);
    return i+1;
}

void quicksort(int arr[], int low, int high){
    if(low<high){
        int pi=part(arr, low, high);
        quicksort(arr, low, pi-1);
        quicksort(arr, pi+1, high);
    }
}
void printarr(int arr[], int si){
    for(int i=0; i<si; i++)
        cout<<arr[i]<<"\n";
}

int main ()
{
    int arr[8]={2,7,3,8,6,5,1,4};
    int si=sizeof(arr)/sizeof(arr[0]);
    quicksort(arr, 0, si-1);
    printarr(arr,si);

    return 0;
}
