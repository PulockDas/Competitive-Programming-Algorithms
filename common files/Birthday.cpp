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

    for(int i=0; i<n; i+=2)
        cout << arr[i] << ' ';

    int i;
    i = (n%2 == 1) ? n-2 : n-1;

    for(; i>0; i-=2)
        cout << arr[i] << ' ';

    return 0;
}
