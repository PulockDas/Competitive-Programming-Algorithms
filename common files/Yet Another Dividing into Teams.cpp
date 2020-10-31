#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int q;
    cin >> q;

    here:
    while(q--){
        int n;
        cin >> n;

        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];

        sort(arr, arr+n);

        for(int i=0; i<n-1; i++){
            if(arr[i] == arr[i+1]-1){
                cout << 2 <<endl;
                goto here;
            }
        }

        cout << 1 << endl;
    }

    return 0;
}
