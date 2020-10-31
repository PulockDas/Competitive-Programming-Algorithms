#include <bits/stdc++.h>
using namespace std;

int cost(int arr[], int x, int n){
    int c=0;
    for(int i=0; i<n; i++){
        if(arr[i]!=x)
            c+=abs(x-arr[i])-1;
    }

    return c;
}

int main ()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
       cin>>arr[i];

    sort(arr, arr+n);

    if(n%2==0){
        int x1=n/2;
        int x2=n/2-1;
        int m=(arr[x1]+arr[x2])/2;

            //        int c1=cost(arr, x1, n);
            //        int c2=cost(arr, x2, n);

//        if(c1<c2)
//            cout<<arr[x1]<<" "<<c1;
//
//        else
//            cout<<arr[x2]<<" "<<c2;
        int c=cost(arr, m, n);
        cout<<m<<" "<<c;

    }

    else{
        int x=n/2;
        cout<<arr[x]<<" ";
        x=arr[x];
        int c=cost(arr, x, n);

        cout<<c;
    }

    return 0;
}
