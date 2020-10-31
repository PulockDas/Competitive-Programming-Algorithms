#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++)
        cin >> arr[i];

    int d = 0;
    for (int i=0,j=1; j<n; i++,j++){
        if(arr[i] == 1){
            if(arr[j] == 2)
                d += 3;
            else
                d += 4;
        }

        else if(arr[i] == 2){
            if(arr[j] == 1)
                d += 3;
            else{
                cout << "Infinite";
                return 0;
            }
        }
        else{
            if(arr[j] == 1){
                if(arr[j+1] == 2){
                    d += 6;
                    j++;
                    i++;
                }
                else
                    d += 4;
            }
            else{
                cout << "Infinite";
                return 0;
            }
        }
    }

    cout << "Finite" << endl << d;

    return 0;
}
