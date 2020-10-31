#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, x, y;
    cin >> n >> x >> y;

    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];

    int i=0;

    for(; i<n; i++){
        bool ch = false;
        for(int j=i-1, k=0; j>-1 && k<x; j--,k++){
            if(arr[i] > arr[j]){
                ch = true;
                break;
            }
        }

        if(!ch){
            for(int j=i+1; j<=i+y && j<n; j++){
                if(arr[i] > arr[j]){
                    ch = true;
                    break;
                }
            }

            if(!ch){
                cout << i+1;
                return 0;
            }

        }
    }

}
