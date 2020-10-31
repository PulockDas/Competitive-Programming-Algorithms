#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int arr[n][n], num = 1;
    int i = 0, j = -1;

    for(; i<n; i++){
        bool ch;
        (j == -1)? ch = true : ch = false;

        if(ch){
            j++;
            while(j<n){
                arr[j][i] = num++;
                j++;
            }
        }

        else{
            j--;
            while(j>-1){
                arr[j][i] = num++;
                j--;
            }
        }

        //cout << j << endl;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            cout<< arr[i][j] << " ";
        cout << endl;
    }

    return 0;
}
