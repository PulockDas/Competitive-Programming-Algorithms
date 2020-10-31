#include <bits/stdc++.h>
using namespace std;
#define mx 200000
int sum[mx];

int main ()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];


    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++){
            int s=arr[i]+arr[j];
            sum[s]++;
        }

    int m=sum[0];
    for(int i=1; i<mx; i++){
        if(m<sum[i])
            m=sum[i];
    }

    cout<<m<<endl;

    return 0;
}
