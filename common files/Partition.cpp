#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    int a;
    int sp=0, sm=0;

    for(int i=0; i<n; i++){
        cin >> a;
        if(a > 0)
            sp += a;
        else
            sm += a;
    }

    cout << sp - sm;

    return 0;
}
