#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, m;
    cin >> n >> m;

    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
            cin >> arr[i][j];
    }

    for(int i=n-2; i>0; i--){
        for(int j=m-2; j>0; j--){

            if(arr[i][j] == 0){
                arr[i][j] = min(arr[i+1][j]-1, arr[i][j+1]-1);
            }

            if(arr[i][j] >= arr[i+1][j] || arr[i][j] >= arr[i][j+1] || arr[i][j] <= arr[i-1][j] || arr[i][j] <= arr[i][j-1]){
                cout << -1;
                return 0;
            }

        }
    }

    int c = 0;

    for(int i=1; i<m; i++){
        if(arr[0][i] <= arr[0][i-1])
            c = 1;
    }

    for(int i=1; i<m; i++){
        if(arr[n-1][i] <= arr[n-1][i-1])
            c = 1;
    }

    for(int i=1; i<n; i++){
        if(arr[i][0] <= arr[i-1][0])
            c = 1;
    }

    for(int i=1; i<n; i++){
        if(arr[i][m-1] <= arr[i-1][m-1])
            c = 1;
    }

    if(c == 1){
        cout << -1;
        return 0;
    }

    int sum = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
            sum += arr[i][j];
    }

    cout << sum;

    return 0;
}
