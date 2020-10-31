#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n,k,ans;
    cin>>n>>k;
    int arr[n];

    for(int i=0; i<n; i++)
        cin>>arr[i];

    if(arr[k-1]!=0){
       ans=k;
       for(int i=k; i<n; i++){
            if(arr[i]==arr[k-1])
                ans++;
            else
                break;
       }
    }

    else{
        ans=0;
        for(int i=0; i<k-1; i++){
            if(arr[i]>0)
                ans++;
            else
                break;
        }
    }
    cout<<ans;

    return 0;
}
