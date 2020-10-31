#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int arr[n];
    if(n%2==0){
        for(int i=1; i<=n; i+=2){
            arr[i-1]=i+1;
            arr[i]=i;
        }
        for(int i=1; i<=n; i++)
            cout<<arr[i-1]<<" ";
    }
    else
        cout<<"-1";

    return 0;
}
