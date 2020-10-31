#include <bits/stdc++.h>
using namespace std;

int arr[10];

bool ch(int i){
    while(i/10 != 0){
        int num = i%10;

        if(arr[num]){
            return false;
        }

        arr[num]++;

        i /= 10;
    }

    if(arr[i]) return false;

    return true;
}

int main ()
{
    int l, r;

    cin >> l >> r;

    for(int i=l; i<=r; i++){
        if(ch(i)){
            cout << i;
            return 0;
        }

        memset(arr, 0, sizeof(arr));

    }

    cout << -1;

    return 0;
}
