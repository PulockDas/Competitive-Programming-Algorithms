#include <bits/stdc++.h>
using namespace std;

#define mx 101
int number[mx];

int main ()
{
    int n;
    cin >> n;
    int a;

    for(int i=0; i<n; i++){
        cin >> a;
        number[a]++;
    }

    int maxi = number[0];
    for(int i=1; i<mx; i++){
        if(number[i] > maxi)
            maxi = number[i];
    }

    cout << maxi;

    return 0;
}
