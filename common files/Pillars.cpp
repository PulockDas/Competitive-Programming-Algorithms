#include <bits/stdc++.h>
using namespace std;

bool ch_sort(int arr[], int l){
    for(int i=0; i<l; i++){
        if(arr[i] >= arr[i+1])
            return false;
    }
    return true;
}

bool rev_ch_sort(int arr[], int l, int n){
    for(int i=l; i<n; i++){
        if(arr[i] <= arr[i+1])
            return false;
    }
    return true;
}

int main ()
{
    int n;
    cin >> n;
    int arr[n];
    int check[n+1];
    memset(check, 0, sizeof(check));

    cin >> arr[0];
    check[arr[0]]++;

    int m = 0;

    for(int i=1; i<n; i++){
        cin >> arr[i];
        if(check[arr[i]] != 0){
            cout << "NO";
            return 0;
        }
        check[arr[i]]++;

        if(arr[i] > arr[m])
            m = i;
    }

    if(ch_sort(arr, m-1) && rev_ch_sort(arr, m+1, n-1))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
