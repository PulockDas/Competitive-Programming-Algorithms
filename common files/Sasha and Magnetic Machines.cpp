#include <bits/stdc++.h>
using namespace std;

bool isprime(int m){
    int i=2;
    for(; i*i<=m; i++){
        if(m%i==0)
            return false;
    }
    return true;
}

int main ()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
        cin>>arr[i];

    sort(arr, arr+n);

    int x;
    int in=arr[0]+1;
    int j=n-1;
    while(j>0 && isprime(arr[j])){
        j--;
    }

    for(; in<arr[j])

    int s=0;
    for(int i=0; i<n; i++)
        s+=arr[i];

    cout<<s;

    return 0;
}
