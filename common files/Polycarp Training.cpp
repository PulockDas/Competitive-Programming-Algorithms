#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];

    sort(arr, arr+n);

    int ans=0, day=1;
    for(int i=0; i<n; i++){
        if(arr[i] >= day){
            ans++;
            day++;
        }
    }

    cout << ans;

    return 0;
}
