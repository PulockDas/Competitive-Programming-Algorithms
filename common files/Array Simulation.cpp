#include <bits/stdc++.h>
using namespace std;
#define mx 100001
int put[mx];

int main ()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int arr[n];

        for(int i=0; i<n; i++){
            cin>>arr[i];
            put[arr[i]]++;
        }

        sort(arr, arr+n, greater<int>());

        int s=0;
        for(int i=0; )

    }


    return 0;
}
