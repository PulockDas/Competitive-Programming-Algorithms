#include <bits/stdc++.h>
using namespace std;
int arr[5]={100, 20, 10, 5, 1};

int main ()
{
    int n;
    cin >> n;

    int s = 0;
    for(int i=0; i<5 && n>0; i++){
        int m = n / arr[i];
        s += m;
        n %= arr[i];
    }

    cout << s;

    return 0;
}
