#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int arr[4], maxi = 0;

    int i;
    for(i=0; i<4; i++){
        cin >> arr[i];

        if(arr[maxi] < arr[i])
            maxi = i;
    }

    for(i=0; i<4; i++){
        if(i != maxi)
            cout << arr[maxi] - arr[i] << ' ';
    }

    return 0;
}
