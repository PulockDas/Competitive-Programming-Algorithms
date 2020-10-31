#include <bits/stdc++.h>
using namespace std;

int max(int arr[], int n){
    int m=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>m)
            m=arr[i];
    }
    return m;
}

int main ()
{
    int n,i,can=0,c;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
        cin>>arr[i];
    int m=max(arr, n);

    here:
    c=0;
    for(i=1; i<n; i++){
        if(arr[i]==m && arr[i]>=arr[0]){
            arr[i]--;
            arr[0]++;
            can++;
            c++;
        }
    }
    if(c==0)
        cout<<can;
    else{
        m=max(arr, n);
        goto here;
    }

    return 0;
}
