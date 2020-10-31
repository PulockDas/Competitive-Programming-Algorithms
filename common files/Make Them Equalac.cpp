#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;

    int arr[n];
    cin >> arr[0];

    int ma = arr[0], mi = arr[0];
    int i;

    for(i=1; i<n; i++){
        cin >> arr[i];
        if(mi > arr[i])
            mi = arr[i];

        if(ma < arr[i])
            ma = arr[i];
    }

    int avg;
    if((mi + ma) % 2 ==0)
        avg = (mi + ma)/2;
    else
        avg = ma;

    for(i=0; i<n; i++){
        if(arr[i] != mi && arr[i] != avg && arr[i] != ma){
            cout << -1;
            break;
        }
    }

    if(i == n)
        cout << avg - mi;

    return 0;
}
