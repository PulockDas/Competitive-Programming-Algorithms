#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int arr[n][2];

    for(int i=0; i<n; i++)
        cin>>arr[i][0]>>arr[i][1];

    int s=0;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i][0]==arr[j][1])
                s++;
            if(arr[i][1]==arr[j][0])
                s++;
        }
    }

    cout<<s;

    return 0;
}
