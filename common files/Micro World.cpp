#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n,k,l;
    cin>>n>>k;
    int arr[n];
    l=n;

    for(int i=0; i<n; i++)
        cin>>arr[i];
    sort(arr, arr+n);

    for(int i=0,j=1; j<n; ){
        int m=arr[i]+k;
        if(arr[i]<arr[j] && m>=arr[j]){
            l--;
            i++;
            j++;
        }
        else if(arr[i]==arr[j]){
            int c=2;
            j++;
            while(j<n && arr[i]==arr[j]){
                c++;
                j++;
            }
            if(arr[i]<arr[j] && m>=arr[j]){
                l-=c;
                i+=c;
                j++;
            }
        }
        else{
            i++;
            j++;
        }
    }
    cout<<l;

    return 0;
}
