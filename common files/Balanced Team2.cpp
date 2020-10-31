#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, lim=1;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);

    int max = 0;

    for(int i=lim-1; i<n; i++){
        int upore = arr[i]+5;

        int count = 1;
        for(int j=i+1; j<n; j++){

            if(arr[j] == arr[i])
                lim++;

            if(upore >= arr[j]){
                count++;
            }

            else{
                if(max < count){
                    max = count;
                }

                break;
            }

            if(j == n-1){
                if(max < count){
                    max = count;
                }

                break;

            }

        }
    }

    cout << max <<endl;


    return 0;
}
