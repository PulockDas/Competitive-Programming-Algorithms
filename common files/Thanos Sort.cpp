#include <bits/stdc++.h>
using namespace std;

int arr[16];

bool issorted(int b, int e){
    for(int i=b+1; i<=e; i++){
        if(arr[i] < arr[i-1])
            return false;
    }
    return true;
}

int getnumber(int b, int e){
    if(issorted(b, e))
        return e-b+1;

    int left = getnumber(b, e/2);
    int right = getnumber(e/2+1, e);

    return max(left, right);
}

int main ()
{
    int n;
    cin >> n;

    //int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];

    cout << getnumber(0, n-1);

    return 0;
}
