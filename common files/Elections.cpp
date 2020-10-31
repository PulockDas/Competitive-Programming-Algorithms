#include <bits/stdc++.h>
using namespace std;

int maxin(int arr[], int n){
    int m=arr[0],mi=0;
    for(int j=1; j<n; j++){
        if(arr[j]>m){
            m=arr[j];
            mi=j;
        }
    }

    return mi;
}

int main ()
{
    int n,m;
    cin>>n>>m;
    int vic[n];
    for(int i=0; i<n; i++)
        vic[i]=0;

    int arr[m][n];
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            cin>>arr[i][j];
    for(int i=0; i<m; i++){
        int k=maxin(arr[i], n);
        vic[k]++;
    }

    cout<<maxin(vic, n)+1;

    return 0;
}
