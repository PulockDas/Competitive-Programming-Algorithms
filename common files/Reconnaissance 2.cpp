#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;

    int arr[n];

    cin >> arr[0];
    int m = 1000, x, y;

    for(int i=1; i<n; i++){
        cin >> arr[i];
        int num = abs(arr[i]-arr[i-1]);

        if(num < m){
            m = num;
            x = i, y = i+1;

            if(m == 0){
                cout << x << ' ' << y;
                return 0;
            }
        }
    }

    int num = abs(arr[n-1] - arr[0]);

    if(num < m)
        cout << 1 <<' ' << n;

    else cout << x << ' ' << y;

    return 0;
}
