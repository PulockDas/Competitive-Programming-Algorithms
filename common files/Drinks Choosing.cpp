#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, k;
    cin >> n >> k;

    int arr[n];

    int type[++k];
    for(int i=0; i<k; i++)
        type[i] = 0;

    for(int i=0; i<n; i++){//proti joner type
        cin >> arr[i];
        type[arr[i]]++;
    }

    int ans = 0;
    for(int i=0; i<k; i++){
        if(type[i] && type[i]%2 == 0)
            ans += type[i];
        else if(type[i] && type[i]%2 == 1)
            ans += (type[i]/2) * 2;
    }

    int ex_drinks = (n+1)/2-ans/2;

    cout << ans + ex_drinks;

    return 0;
}
