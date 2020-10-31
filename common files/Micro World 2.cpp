#include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long n,l;
    long long k;
    cin>>n>>k;
    l=n;
    long long arr[n];

    for(long long i=0; i<n; i++)
        cin>>arr[i];
    sort(arr, arr+n);

    for(long long i=0,j=1; j<n;){
        long long m=arr[i]+k;

        if(arr[i]<arr[j] && m>=arr[j]){
            l--;
            i++;
            j++;
        }

        else if(arr[i]==arr[j]){
            long long c=2;
            j++;
            while(j<n && arr[i]==arr[j]){
                c++;
                j++;
                }
            if(arr[i]<arr[j] && m>=arr[j]){
                l-=c;
                i=j;
                j++;
            }
            else{
                i=j;
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

