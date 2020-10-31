#include <bits/stdc++.h>
using namespace std;

int maxin(int arr[], int n){
    int m=arr[0],i=0;
    for(int j=1; j<n; j++){
        if(arr[j]>m){
            m=arr[j];
            i=j;
        }
    }
    return i;
}

int main ()
{
    int n,i,can=0;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
        cin>>arr[i];

    here:
    int k=maxin(arr, n);
    if(k==0){
        for(i=1; i<n; i++){
            if(arr[0]==arr[i]){
                break;
            }
        }
        if(i<n)
            cout<<can+1;
        else
            cout<<can;
    }

    else{
        int m=(arr[k]-arr[0])/2+1;
        arr[0]=arr[0]+m;
        arr[k]=arr[k]-m;
        can+=m;
        goto here;
    }

    return 0;
}
