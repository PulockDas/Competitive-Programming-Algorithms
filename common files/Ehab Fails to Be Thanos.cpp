#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    n *= 2;

    int arr[n];

    int total = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        total += arr[i];
    }

    sort(arr, arr+n);
    n /= 2;

    int fst = 0;

    for(int i=0; i<n; i++)
        fst += arr[i];

    int scd = total - fst;

    if(fst == scd)
        cout << -1;

    else{
        n *= 2;
        for(int i=0; i<n; i++)
            cout << arr[i] << " ";
    }

    return 0;
}
