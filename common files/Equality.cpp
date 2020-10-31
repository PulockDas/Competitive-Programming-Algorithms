#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, k;
    cin >> n >> k;
    int arr[k];
    for(int i=0; i<k; i++)
        arr[i]=0;

    string s;
    cin >> s;

    for(int i=0; i<n; i++)
        arr[s[i]-'A']++;

    int mi = arr[0];
    for(int i=1; i<k; i++){
        if(mi>arr[i])
            mi = arr[i];
    }

    cout<<mi * k;

    return 0;
}
