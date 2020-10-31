#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int q;
    cin >> q;

    while(q--){
        int n;
        cin >> n;

        int arr[n];

        for(int i=0; i<n; i++)
            cin >> arr[i];

        for(int i=0; i<n; i++){

            int jabo = i+1;
            int sum = 1;

            int in = i;

            while(arr[in] != jabo){
                sum++;
                in = arr[in]-1;
            }

            cout << sum << " ";
        }

        cout << endl;

    }

    return 0;
}
