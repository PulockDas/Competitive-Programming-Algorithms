#include <bits/stdc++.h>
using namespace std;

int max(int ans[], int n){
    int b=ans[0];
    for(int i=1; i<n; i++){
        if(ans[i]>b)
            b=ans[i];
    }

    return b;
}

int main ()
{
    int n;
    cin>>n;

    string arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    int ans[n];

    for(int i=0; i<n; i++)
        ans[i]=1;

    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; i++){
            if(arr[i]==arr[j])
                ans[i]++;
        }

    cout<<max(ans, n);


    return 0;
}
