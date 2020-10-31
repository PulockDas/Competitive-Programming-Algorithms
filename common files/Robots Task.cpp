#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    int arr[n];
    int mark[n];

    for(int i=0; i<n; i++)
        mark[i] = 0;

    for(int i=0; i<n; i++)
        cin >> arr[i];

    int in = 0, ans = -1;
    for(in=0; in<n; ){
        ans++;
        for(int i=0; i<n; i++){
            if(arr[i] <= in && mark[i] == 0){
                in++;
                mark[i]=1;
            }
        }

        if(in < n)
            ans++;
        for(int i=n-1; i>-1; i--){
            if(arr[i] <= in && mark[i] == 0){
                in++;
                mark[i]=1;
            }
        }
    }

    cout<<ans;

    return 0;
}
