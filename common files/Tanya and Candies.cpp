#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int arr[n];

    long long sumodd=0, sumev=0;

    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(i%2==0)
            sumodd+=arr[i];
        else
            sumev+=arr[i];
    }

    int dif=abs(sumodd-sumev), ans=0;
    if(sumodd>sumev){
        for(int i=0; i<n; i+=2){
            if(arr[i]==dif)
                ans++;
        }
    }
    else if(sumodd<sumev){
        for(int i=1; i<n; i+=2){
            if(arr[i]==dif)
                ans++;
        }
    }

    else
        ans=0;

    cout<<ans;

    return 0;
}
