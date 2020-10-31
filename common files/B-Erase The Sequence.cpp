#include <bits/stdc++.h>
using namespace std;
int check[101];

int main ()
{
    int n,z=0,xxor=0;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i] != 0)
        z++;
        xxor = xxor ^ arr[i];
    }
    if(z == 0)
    cout << -1 ;
    else if(xxor == 0)
    cout << 2 ;
    else cout << 1;



    return 0;
}
